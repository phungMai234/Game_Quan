
#include"ImoveBrick.h"

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
    if( j < MaxJ - 1 && inside(i, j) == true && Board[i][j + 1] == 0)
        return true;
    else
        return false;
}
bool down(int i, int j)
{
    if( j < MaxI - 1 && inside(i, j) == true && Board[i + 1][j] == 0)
        return true;
    else
        return false;
}

void turnLeft(KhoiGach* pKhoiGach)
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

void turnRight(KhoiGach* pKhoiGach)
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
void goDown(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {

            if(pKhoiGach->arr[i][j] == 1)
            {
                if(down(pKhoiGach->iBoard + i, pKhoiGach->jBoard + j) == false)
                    return; //dung
            }
        }
    }
    pKhoiGach->iBoard++;
}
