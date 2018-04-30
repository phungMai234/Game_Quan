#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
#include<conio.h>

#include"ICreatBrick.h"
#include"ImoveBrick.h"
#include"IMap.h"
#include"INFO.h"
#include"Icheck.h"
#include"IveXoaKhoiGach.h"


int Board[MaxI][MaxJ];

using namespace std;

int main()
{

    Draw();
    int Id = Loai();
    KhoiGach * curr; // tao khoi gach
    curr = TaoKhoiGach(Id); // random khoi gach

    INFO info;  // khoi tao info ban dau
    initGame(&info); // truyen info ban dau

    char key; // nhap tu ban phim
    clock_t Start, End; // thoi gian chay

    while(1)
    {
        veBangDiem(info);
        VeKhoiGach(curr);
        Start = clock();

        do
        {
            if(kbhit())
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
                if(key == 'w' || key == 'W')
                {
                    rotateObject(curr);
                }

                VeKhoiGach(curr);
            }
            End = clock();
        }while(float(End - Start) < 1000);

        xoaKhoiGach(curr);

        if(goDown(curr) == false)
        {
            ganGiaTri(curr); // gan toa do khoi gach vua roi xuong cho bagn
            int result = kiemTra(curr, &info);
            if(result == -1)
                break;
            huyKhoiGach(curr);
            Id = Loai();
            curr = TaoKhoiGach(Id); // tao khoi gach xuat hien tiep theo

            disPlayBoard(); // ve ma tran
        }
    }



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
    gotoXY(30,25);
    return 0;
}


