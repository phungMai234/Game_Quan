#ifndef IMAP_H_INCLUDED
#define IMAP_H_INCLUDED

#include"console.h"
#include"INFO.h"
#include"ICreatBrick.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

extern int Board[MaxI][MaxJ];

#include<iostream>

using namespace std;

// ve khung tro choi
void Draw();
// ve bang diem hien thong tin tro choi
void veBangDiem(INFO);
// ham gan gia tri trang thai ma tran
void disPlayBoard();
// ham cap nhat lai toa do sau khi da an duoc mot ham
void updateGame(int);
// ham gan gia tri cho bang sau moi lan khoi gach roi xuong
void ganGiaTri(KhoiGach*);

#endif // IMAP_H_INCLUDED
