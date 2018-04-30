#ifndef ITHAOTACVOIKHOIGACH_H_INCLUDED
#define ITHAOTACVOIKHOIGACH_H_INCLUDED
#include<iostream>
#include"IMap.h"
#include"ItaoKhoiGach.h"


#define LEFT 4
#define TOP 4

#define MaxI 22
#define MaxJ 10

extern int Board[MaxI][MaxJ]; // hoi cai extern nay

using namespace std;

void VeKhoiGach(KhoiGach*);
void XoaKhoiGach(KhoiGach*);
void HuyKhoiGach(KhoiGach*);
void GanGiaTri(KhoiGach*);

#endif // ITHAOTACVOIKHOIGACH_H_INCLUDED
