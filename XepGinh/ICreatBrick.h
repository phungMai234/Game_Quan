#ifndef ICREATBRICK_H_INCLUDED
#define ICREATBRICK_H_INCLUDED

#include"console.h" // de goi consol

#include<ctime> // random time
#include<cstdlib> // radom time
#include<iostream>

#define TOP 4
#define LEFT 4

#define MaxI 22
#define MaxJ 10

using namespace std; // co cout

struct KhoiGach
{
    int **arr; // mang chua khoi gach
    int Row, Col; // so hang , cot cua
    int iBoard, jBoard;// vi tri cau khoi gach
};

KhoiGach* TaoKhoiGach(int);
int Loai();



#endif // ICREATBRICK_H_INCLUDED
