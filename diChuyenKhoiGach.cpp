#include"IdiChuyenKhoiGach.h"

#define MaxI 22
#define MaxJ 10

extern int Board[MaxI][MaxJ]; // kb bien toan cuc dung cho moi file

bool Inside(int i, int j)
{
    if((i >= 0 && i < MaxI) && (j >= 0 && j < MaxJ))
        return true;
    else
        return false;
}

bool Left(int i, int j)
{
    if(j > 0 && Inside(i, j)==true && Board[i][j - 1] == 0)
        return true;
    return false;
}
bool Right(int i, int j)
{
    if((j < MaxJ - 1) && Inside(i, j)==true && Board[i][j + 1] == 0)
        return true;
    return false;
}
bool Down(int i, int j)
{
    if((i < MaxI - 1) && Inside(i, j)==true && Board[i + 1][j] == 0)
        return true;
    return false;
}

// ham di chuyen ca khoi gach

void turnLeft(KhoiGach* pkhoigach)
{
    int i, j;
    for(i = 0; i < pkhoigach->Row; i++)
    {
        for(j = 0; j < pkhoigach->Col; j++)
        {
            if(pkhoigach->arr[i][j] == 1)
            {
                if(Left(pkhoigach->iBoard + i, pkhoigach->jBoard + j) == false || pkhoigach->iBoard <= 3)
                    return;
            }
        }
    }
    pkhoigach->jBoard-=1;
}

void turnRight(KhoiGach* pkhoigach)
{
    int i, j;
    for(i = 0; i < pkhoigach->Row; i++)
    {
        for(j = 0; j < pkhoigach->Col; j++)
        {
            if(pkhoigach->arr[i][j] == 1)
            {
                if(Right(pkhoigach->iBoard + i, pkhoigach->jBoard + j) == false || pkhoigach->iBoard <= 3)
                    return;
            }
        }
    }
    pkhoigach->jBoard+=1;
}

int goDown(KhoiGach* pkhoigach)
{
    int i, j;
    for(i = 0; i < pkhoigach->Row; i++)
    {
        for(j = 0; j < pkhoigach->Col; j++)
        {
            if(pkhoigach->arr[i][j] == 1)
            {
                if(Down(pkhoigach->iBoard + i, pkhoigach->jBoard + j) == 0)
                    return 0; // khong roi xuong
            }
        }
    }
    pkhoigach->iBoard+=1;
    return 1; // roi xuong
}
void goAround(KhoiGach* pkhoigach) // hoi quan
{
    int i,j;
    int ** tmpArr;
    int tmpRow = pkhoigach->Col;
    int tmpCol = pkhoigach->Row;
    //Cấp phát bộ nhớ cho ma trận phụ tmpArr.
    tmpArr= new int*;
    for( i = 0; i < tmpRow; i++)
    {
        tmpArr[i] = new int;
    }
    ///////////////////////////////////////////////
    for(i = pkhoigach->Row - 1; i >= 0; i--)
        for(j = pkhoigach->Col - 1; j >= 0; j--)
        {
            tmpArr[j][pkhoigach->Row - i - 1] = pkhoigach->arr[i][j];
        }
    //Kiểm tra hợp lệ.
    for (i=0; i<tmpRow; i++)
    {
        for(j=0; j<tmpCol; j++)
            if(!Inside(pkhoigach->iBoard+i,pkhoigach->jBoard+j)||Board[pkhoigach->iBoard+i][pkhoigach->jBoard+j]==1)
                return;
    }
    for(i=0; i<pkhoigach->Row; i++)
        delete(pkhoigach->arr[i]);
    delete(pkhoigach->arr);
    //Cập nhật thay đổi sau khi xoay.
    pkhoigach->Col=tmpCol;
    pkhoigach->Row=tmpRow;
    pkhoigach->arr=tmpArr;

}
