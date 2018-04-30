#include<iostream>

#include"IthongtinCapDoDiemLevel.h"

#define LEFT 4
#define TOP 4

#define MaxI 22
#define MaxJ 10

using namespace std;

void VeBangDiem(INFO info)
{
    TextColor(15);
    gotoXY(LEFT+MaxJ+2,10);
    cout << "  SCORE: " << info.score;
    gotoXY(LEFT+MaxJ+2,11);
    cout << "  LEVEL: " << info.level;
    gotoXY(LEFT+MaxJ+2,12);
    cout << "  SPEED: " << info.speed;
}
void Ve_Next(int ID)
{
    KhoiGach *pnext=TaoKhoiGach(ID);
    int iRoot=LEFT+MaxJ + 5;
    int jRoot=TOP;
    for(int i=0; i<pnext->Row; i++)
    {
        for (int j=0; j<pnext->Col; j++)
        {
            if(pnext->arr[i][j]==1)
            {
                TextColor(9);
                gotoXY(iRoot+j,jRoot+i);
                cout << char(219);
            }
        }

    }
    HuyKhoiGach(pnext);
}
void Xoa_Next()
{
    int iRoot=LEFT+MaxJ+5;
    int jRoot=TOP;
    for(int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {

            TextColor(0);
            gotoXY(iRoot+j,jRoot+i);
            cout << " "; // chú ý in ra dấu cách
        }

    }
}

void HuyKhoiGach(KhoiGach* pkhoigach)
{
    int i;
    //Huy bo nho cua ma tran trang thai arr.
    for(i=0; i<pkhoigach->Row; i++)
        delete(pkhoigach->arr[i]);
    delete(pkhoigach->arr);
    /////////////////////////////////////////////////////////
    //Sau do moi free(pkhoigach)
    delete(pkhoigach);
    pkhoigach=NULL;
}
