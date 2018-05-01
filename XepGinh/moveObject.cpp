
#include"ImoveObject.h"

bool inside(int i, int j)
{
    if(i >= 0 && i < MaxI && j >= 0 && j < MaxJ)
        return true;
    else
        return false;
}
bool left(int i, int j)
{
    if( j > 0 && inside(i, j) == true && Board[i][j - 1] == 0)
        return true;
    else
        return false;
}
bool right(int i, int j)
{
    if( j < MaxJ - 1&& inside(i, j) == true && Board[i][j + 1] == 0) // board
        return true;
    else
        return false;
}
bool down(int i, int j)
{
    if( i < MaxI - 1&& inside(i, j) == true && Board[i + 1][j] == 0) // board
        return true;
    else
        return false;
}

void moveLeftObject(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {

            if(pKhoiGach->arr[i][j] == 1)
            {
                if(left(pKhoiGach->iBoard + i, pKhoiGach->jBoard + j) == false)
                    return; //dung
            }
        }
    }
    pKhoiGach->jBoard--;
}

void moveRightObject(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {

            if(pKhoiGach->arr[i][j] == 1)
            {
                if(right(pKhoiGach->iBoard + i, pKhoiGach->jBoard + j) == false)
                    return; //dung
            }
        }
    }
    pKhoiGach->jBoard++;
}
bool moveDownObject(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {

            if(pKhoiGach->arr[i][j] == 1)
            {
                if(down(pKhoiGach->iBoard + i, pKhoiGach->jBoard + j) == false)
                    return false; //dung
            }
        }
    }
    pKhoiGach->iBoard++;
    return true;
}
void rotateObject(KhoiGach* pKhoiGach) // hoi
{
    // iBoard, jBoard k thay doi, vi tri khoi gach van giu nguyen
    int i, j;
    int **tmpArr; // mang tam thoi luu khoi gach da xoay
    int tmpRow = pKhoiGach->Col; // hang cua khoi gach xoay
    int tmpCol = pKhoiGach->Row; // cot cua khoi gach xoay


    // cap phat bo nho dong cho ma tran tam thoi
    tmpArr = new int*;
    for(i = 0; i < tmpRow; i++)
    {
        tmpArr[i] = new int;
    }

    // chuyen ma tran hien tai thanh ma tran xoay mot goc 90

    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {
            tmpArr[j][pKhoiGach->Row - i - 1] = pKhoiGach->arr[i][j];
        }
    }

    // kiem tra xem co xoay duoc khoi gach khong
    // k chay dc
    for(i = 0; i < tmpRow; i++)
    {
        for(j = 0; j < tmpCol; j++)
        {
            if(inside(pKhoiGach->iBoard + i, pKhoiGach->jBoard + j) == false || Board[pKhoiGach->iBoard + i][pKhoiGach->jBoard + j] == 1) // k hieu lam
                return;
        }

    }

    // giai phong khoi gach trc khi xoay

    for(i = 0; i < pKhoiGach->Row; i++)
        delete [] pKhoiGach->arr[i];
    delete [] pKhoiGach->arr;

    // cap nhat thay doi sau khi xoay

    pKhoiGach->Row = tmpRow;
    pKhoiGach->Col = tmpCol;
    pKhoiGach->arr = tmpArr;

}

