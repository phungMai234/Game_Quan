
#include <iostream>

//#include<cstdlib>
//#include<ctime>
//#include<conio.h>
//#include<windows.h>
//#include<stdint-gcc.h>

#include"console.h"
#include"IstructKhoiGach.h"
#include"ItaoKhoiGach.h"
#include"Imenu.h"
#include"Istruct_INFO.h"
#include"I_INFO_game.h"
#include"IdiChuyenKhoiGach.h"
#include"IhienThithongTinGame.h"
#include"IMap.h"
#include"IthaoTacVoiKhoiGach.h"
#include"IPlayer.h"

//#define LEFT 4
//#define TOP 4
//
//#define MaxI 22
//#define MaxJ 10

int Board[MaxI][MaxJ];

using namespace std;







int main() /* chay chÆ°a het game Ä‘Ã£ dá»«ng*/
{
    char choice;

    do
    {
        /*Draw a main menu */
        cout << "--------------GAME TETRIS-------------" << endl;
        cout << "**************MAIN MENU**************" << endl;
        cout << "(1) - New Game" <<  endl;
        cout << "(2) - Help" << endl;
        cout << "(3) - Credit" << endl;
        cout << "(4) - Quit Game" << endl;
        cout << "--------------------------------------" << endl;
        /*Get a character from keyvoard*/
        choice = _getch();
        /*choose a function to be exercuted*/

        if(choice == '1')
        {
            dieuKhienChinh();
        }
        if(choice == '2')
        {
            clrscr();
            if(!help())
                break;
        }
        if(choice == '3')
        {
            clrscr();
            if(!credit())
                break;
        }
        if(choice == '4')
        {
            break;
        }
        clrscr();
    }
    while(1);


    return 0;
//    int ID = Loai();
//    KhoiGach* currenKhoi;
//
//    currenKhoi = TaoKhoiGach(ID);
//    VeKhoiGach(currenKhoi);
//    while(1)
//        {
//            if(_kbhit())
//            {
//                clrscr();
//                DrawBoard();
//                char key = _getch();
//                if(key == 'a' || key == 'A')
//                    SangTrai(currenKhoi);
//                if(key == 'd' || key == 'D')
//                    SangPhai(currenKhoi);
//                if(key == 's' || key == 'S')
//                    goDown(currenKhoi);
//                if(key == 'w' || key == 'W')
//                    XoayKhoiGach(currenKhoi);
//                VeKhoiGach(currenKhoi);
//            }
//            else
//            {   clrscr();
//                goDown(currenKhoi);
//                VeKhoiGach(currenKhoi);
//
//            }
//            Sleep(500);
//        }


}





