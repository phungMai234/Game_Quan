#ifndef ICHECK_H_INCLUDED
#define ICHECK_H_INCLUDED

#include"ImoveBrick.h"
#include"INFO.h"

//#define MaxI 22
//#define MaxJ 10
//
//#define TOP 4
//#define LEFT 4
//
//
//extern int Board[MaxI][MaxJ];

int kiemTra(KhoiGach*, INFO*);
void ganGiaTri(KhoiGach*);
void disPlayBoard();
void updateGame(int);

#endif // ICHECK_H_INCLUDED
