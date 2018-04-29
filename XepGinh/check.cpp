
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
void ganGiaTri(KhoiGach* pKhoiGach) // moi gan gia tri chuwa ve
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {

        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1)
                Board[pKhoiGach->iBoard + i][pKhoiGach->jBoard + j] = 1;
        }
    }
}
void disPlayBoard()
{
    int i, j;
    for(i = 0; i < MaxI; i++)
    {
        for(j = 0; j < MaxJ; j++)
        {
            if(Board[i][j] == 1 && i > 4)
            {

                gotoXY(j + LEFT + 1, i + TOP + 1 - 4); // k hieu
                TextColor(15);
                cout << char(219);
            }
            if(Board[i][j] == 0 && i >= 4)
            {
                gotoXY(j + LEFT + 1, i + TOP + 1 - 4);
                TextColor(0);
                cout << " ";
            }
        }
    }
}
void updateGame(int  row)
{
    int i, j;
    // hàng bat dau tu 4 -> 22
    for(i = row; i > 0; i--) // > 4 hay > 0, tinh ca o ngoai bang a
    {
        for(j = 0; j < MaxJ; j++)
        {
            Board[i][j] = Board[i - 1][j];
        }
    }

}
