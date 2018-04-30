
#include"Icheck.h"

int kiemTra(KhoiGach* pKhoiGach, INFO* info)
{
    int i, j, countB = 0;

    if(pKhoiGach->iBoard == 3) // xet tung khoi gach xem cham ma tran
        return -1;

    for(i = 0; i < MaxI; i++)
    {
        countB = 0;
        for(j = 0; j < MaxJ; j++)
        {
            if(Board[pKhoiGach->iBoard + i][j] == 1) // soa k phai la Board[i][j] == 1
            {
                countB++;
            }
        }
        if(countB == MaxJ)
        {
            update(info); // cap nhat lai diem, level, speed, sao k co &
            updateGame(pKhoiGach->iBoard + i); // cap nhat lai toa do
            disPlayBoard();

        }
    }
    return 1;
}

void huyKhoiGach(KhoiGach* pKhoiGach)
{

    int i;
    for(i = 0; i < pKhoiGach->Row; i++)
        delete(pKhoiGach->arr[i]);
    delete(pKhoiGach->arr);
}
