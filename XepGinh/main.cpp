#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
#include<conio.h>

#include"ICreatBrick.h"
#include"ImoveBrick.h"
#include"IMap.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4


int Board[MaxI][MaxJ];

using namespace std;

// xet dieu kien di chuyen mot vien gach

int main()
{

    Draw();
    int Id = Loai();
    KhoiGach * curr;
    curr = TaoKhoiGach(Id);
    VeKhoiGach(curr);
    char key;
//    while(1)
//    {
//        key = _getch();
//        clrscr();
//        Draw();
//        if(key == 'a' || key == 'A')
//        {
//            turnLeft(curr);
//        }
//        if(key == 'd' || key == 'D')
//        {
//            turnRight(curr);
//        }
//        if(key == 's' || key == 'S')
//        {
//            goDown(curr);
//        }
////        xoaKhoiGach(curr); // k dung sleep van chay duoc, tac dung cua sleep
//        VeKhoiGach(curr);
//
////        Sleep(500);
//    }

    while(1)
    {
        key = _getch();
        xoaKhoiGach(curr); //  ? moi xoa duoc mot phan
        if(key == 'a' || key == 'A')
        {
            turnLeft(curr);
        }
        if(key == 'd' || key == 'D')
        {
            turnRight(curr);
        }
        if(key == 's' || key == 'S')
        {
            goDown(curr);
        }

        VeKhoiGach(curr);

//        Sleep(500);
    }
    gotoXY(30,25);
    return 0;
}


