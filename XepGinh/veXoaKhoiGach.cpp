#include"IveXoaKhoiGach.h"

void VeKhoiGach(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1 && pKhoiGach->iBoard > 3)
            {
                gotoXY(LEFT + pKhoiGach->jBoard + j + 1, TOP + pKhoiGach->iBoard + i - 3);
                TextColor(15);
                cout << char(219);
            }
        }
    }
}
void xoaKhoiGach(KhoiGach* pKhoiGach)
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {
        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1 && pKhoiGach->iBoard > 3)
            {
                gotoXY(LEFT + pKhoiGach->jBoard + j + 1, TOP + pKhoiGach->iBoard + i - 3);
                TextColor(0);
                cout << " ";
            }
        }
    }
}
//void huyKhoiGach(KhoiGach* pKhoiGach)
//{
//    int i;
//
//    for(i = 0; i < pKhoiGach->Col; i++)
//        delete(pKhoiGach->arr[i]);
//    delete(pKhoiGach->arr);
//
//    pKhoiGach = NULL;
//}
