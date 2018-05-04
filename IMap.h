#ifndef IMAP_H_INCLUDED
#define IMAP_H_INCLUDED
#include<iostream>
#include"console.h"


#define LEFT 4  // de file nao cung dc
#define TOP 4

#define MaxI 22
#define MaxJ 10

extern int Board[MaxI][MaxJ];

using namespace std;


void DrawBoard();
void DisplayBoard();
void CapNhatLaiToaDo(int);


#endif // IMAP_H_INCLUDED
