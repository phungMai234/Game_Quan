#ifndef ICREATBRICK_H_INCLUDED
#define ICREATBRICK_H_INCLUDED

#include"IMap.h"

#include<ctime>
#include<cstdlib>
#include<iostream>

#define TOP 4
#define LEFT 4

using namespace std;

struct KhoiGach
{
    int **arr; // mang chua khoi gach
    int Row, Col; // so hang , cot cua
    int iBoard, jBoard;// vi tri cau khoi gach
};

KhoiGach* TaoKhoiGach(int);
int Loai();
void VeKhoiGach(KhoiGach*);
void xoaKhoiGach(KhoiGach*);
void huyKhoiGach(KhoiGach*)


#endif // ICREATBRICK_H_INCLUDED
