#ifndef ICREATBRICK_H_INCLUDED
#define ICREATBRICK_H_INCLUDED

#include "Iconsole.h"

/* library call random*/
#include<ctime>
#include<cstdlib>

#include<iostream>

#define TOP 4
#define LEFT 4

#define MaxI 22
#define MaxJ 10

using namespace std;

struct KhoiGach
{
    /* array contain objects */
    int **arr;
    /* Row, col go with each of object */
    int Row, Col;
    /* located of object */
    int iBoard, jBoard;
};

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {KhoiGach*} TaoKhoiGach(int ID)
 *
 *@Brief: design a brick allow ID
 *
 *@Param: ID : number of each of brick
 *
 *@Return: creat a brick
 */
KhoiGach* TaoKhoiGach(int ID);

/*!
 * Function: {int} randomObject()
 *
 *@Brief: random ID of each brick
 *
 *@Param: <none>
 *
 *@Return: ID go with each of type of brick
 */
int randomObject();


#endif // ICREATBRICK_H_INCLUDED
