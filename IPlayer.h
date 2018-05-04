#ifndef IPLAYER_H_INCLUDED
#define IPLAYER_H_INCLUDED

#include<iostream>
#include"IdiChuyenKhoiGach.h"
#include"IthaoTacVoiKhoiGach.h"
#include"I_INFO_game.h"
#include<windows.h>
#include<stdint-gcc.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>

#define LEFT 4
#define TOP 4

#define MaxI 22
#define MaxJ 10

extern int Board[MaxI][MaxJ];


using namespace std;


int KiemTra(KhoiGach*, INFO*);

void dieuKhienChinh();
void Xoa_Next();
void Ve_Next(int);

void VeBangDiem(INFO );

#endif // IPLAYER_H_INCLUDED
