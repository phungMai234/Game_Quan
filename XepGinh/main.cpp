#include<iostream>
#include<ctime>
#include<cstdlib>

#include"ICreatBrick.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

using namespace std;



int main()
{

    Draw();
    int Id = Loai();
    KhoiGach * curr;
    curr = TaoKhoiGach(Id);
    VeKhoiGach(curr);

    gotoXY(30,25);
    return 0;
}


