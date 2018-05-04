#ifndef IDICHUYENKHOIGACH_H_INCLUDED
#define IDICHUYENKHOIGACH_H_INCLUDED


#include"ItaoKhoiGach.h"

bool Inside(int, int);
bool Left(int, int);
bool Right(int, int);
bool Down(int, int);

int goDown(KhoiGach*);
void turnLeft(KhoiGach*);
void turnRight(KhoiGach*);
void goAround(KhoiGach*);


#endif // IDICHUYENKHOIGACH_H_INCLUDED
