#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

#include<iostream>

#include "Iconsole.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

using namespace std;

struct INFO
{
    int score;
    int level;
    float speed;
};

void initGame(INFO*);
void update(INFO*);


#endif // INFO_H_INCLUDED
