#ifndef IMOVEBRICK_H_INCLUDED
#define IMOVEBRICK_H_INCLUDED

#include"ICreatBrick.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4


extern int Board[MaxI][MaxJ];

bool inside(int, int);
bool left(int, int);
bool right(int, int);
bool down(int , int);

void turnLeft(KhoiGach*);
void turnRight(KhoiGach*);
void goDown(KhoiGach*);

#endif // IMOVEBRICK_H_INCLUDED
