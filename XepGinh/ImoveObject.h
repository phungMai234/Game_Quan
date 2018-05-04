#ifndef IMOVEBRICK_H_INCLUDED
#define IMOVEBRICK_H_INCLUDED

#include"IdesignObject.h"

#define MaxI 22
#define MaxJ 10

#define TOP 4
#define LEFT 4

/* matrix */
extern int Board[MaxI][MaxJ];

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {bool} inside(int i, int j)
 *
 *@Brief: check small object in matrix
 *
 *@Param: i : position row of small object
 * 		  j : position col of small object
 *@Return: true: if small object is in matrix
 *         false: if small object is not in matrix
 */
bool inside(int i, int j);
/*!
 * Function: {bool} left(int i, int j)
 *
 *@Brief: check small object move left (yes/no)
 *
 *@Param: i : position row of small object
 * 		  j : position col of small object
 *@Return: true: if small object move left
 *         false: if small object don not move left
 */
bool left(int i, int j);

/*!
 * Function: {bool} right(int i, int j)
 *
 *@Brief: check small object move right (yes/no)
 *
 *@Param: i : position row of small object
 * 		  j : position col of small object
 *@Return: true: if small object move right
 *         false: if small object don not move right
 */
bool right(int i, int j);

/*!
 * Function: {bool} down(int i, int j)
 *
 *@Brief: check small object go down (yes/no)
 *
 *@Param: i : position row of small object
 * 		  j : position col of small object
 *@Return: true: if small object go down
 *         false: if small object don not go down
 */
bool down(int i, int j);

/*!
 * Function: {void} moveLeftObject(KhoiGach* pKhoiGach)
 *
 *@Brief: move block object go to the left
 *
 *@Param: pKhoiGach : pointer type of KhoiGach
 *
 *@Return: <none>
 */
void moveLeftObject(KhoiGach* pKhoiGach);

/*!
 * Function: {void} moveRightObject(KhoiGach* pKhoiGach)
 *
 *@Brief: move block object go to the right
 *
 *@Param: pKhoiGach : pointer type of KhoiGach
 *
 *@Return: <none>
 */
void moveRightObject(KhoiGach* pKhoiGach);

/*!
 * Function: {bool} moveDownObject(KhoiGach* pKhoiGach)
 *
 *@Brief: move block object go down
 *
 *@Param: pKhoiGach : pointer type of KhoiGach
 *
 *@Return: true: block object move
 *         false: block object don not move
 */
bool moveDownObject(KhoiGach* pKhoiGach);

/*!
 * Function: {void} rotateObject(KhoiGach* pKhoiGach)
 *
 *@Brief: move block object go around 90
 *@Param: pKhoiGach : pointer type of KhoiGach
 *
 *@Return: <none>
 */
void rotateObject(KhoiGach* pKhoiGach);




#endif // IMOVEBRICK_H_INCLUDED
