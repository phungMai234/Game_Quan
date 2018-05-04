#ifndef IMAP_H_INCLUDED
#define IMAP_H_INCLUDED

#include "Iconsole.h"
#include"INFO.h"
#include"IdesignObject.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

extern int Board[MaxI][MaxJ];

#include<iostream>

using namespace std;

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {void} reder()
 *
 *@Brief: drawing frame game
 *
 *@Param: <none>
 *
 *@Return: <none>
 */
void render();

/*!
 * Function: {void} veBangDiem(INFO info)
 *
 *@Brief: drawing the transcript
 *
 *@Param: info: type of truct: INFO - informaton of game: score, level, speed
 *
 *@Return: <none>
 */
void veBangDiem(INFO info);

/*!
 * Function: {void} disPlayBoard()
 *
 *@Brief: Assigns values for blocks falling into the matrix
 *
 *@Param: <none>
 *
 *@Return: <none>
 */
void disPlayBoard();
// ham cap nhat lai toa do sau khi da an duoc mot ham
void updateGame(int row);
// ham gan gia tri cho bang sau moi lan khoi gach roi xuong
void ganGiaTri(KhoiGach* pKhoiGach);

#endif // IMAP_H_INCLUDED
