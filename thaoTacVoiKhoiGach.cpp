
#include"IthaoTacVoiKhoiGach.h"

void VeKhoiGach(KhoiGach* pkhoigach)
{
    int i;
    int j;
    for(i = 0; i < pkhoigach->Row; i++)
        for(j = 0; j < pkhoigach->Col; j++)
            if(pkhoigach->arr[i][j] == 1 && (pkhoigach->iBoard + i )> 3) // arr k hieu
            {
                TextColor(13);
                gotoXY(LEFT + pkhoigach->jBoard + j + 1, TOP + pkhoigach->iBoard + i - 3);
                cout << char(219); // nho cout ra
            }
}

void XoaKhoiGach(KhoiGach* pkhoigach)
{
    int i, j;
    for(i = 0; i < pkhoigach->Row; i++)
    {
        for(j = 0; j < pkhoigach->Col; j++)
        {
            if(pkhoigach->arr[i][j] == 1 && (pkhoigach->iBoard + i) > 3)
            {
                TextColor(0);
                gotoXY(LEFT + pkhoigach->jBoard + j + 1, TOP + pkhoigach->iBoard + i - 3);
                cout <<" ";
            }
        }
    }
}
void GanGiaTri(KhoiGach* pkhoigach)
{
    for(int i=0; i<pkhoigach->Row; i++)
        for(int j=0; j<pkhoigach->Col; j++)
            if(pkhoigach->arr[i][j]==1)
            {
                Board[pkhoigach->iBoard+i][pkhoigach->jBoard+j]=1;
            }
}
