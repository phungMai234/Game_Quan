#ifndef IMOVEBRICK_H_INCLUDED
#define IMOVEBRICK_H_INCLUDED

#include"ICreatBrick.h" // tao khoi gach

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4


extern int Board[MaxI][MaxJ];


bool inside(int, int); // sd board
bool left(int, int); // sd board
bool right(int, int); // sd board
bool down(int , int);

void turnLeft(KhoiGach*);
void turnRight(KhoiGach*);
bool goDown(KhoiGach*);
void rotateObject(KhoiGach*);




#endif // IMOVEBRICK_H_INCLUDED
