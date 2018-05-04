#ifndef IVEXOAKHOIGACH_H_INCLUDED
#define IVEXOAKHOIGACH_H_INCLUDED

#include<iostream>
#include"IdesignObject.h"

#include"Icheck.h"

using namespace std;

/***********************************************************************************************************************
 * PROTOTYPE
 **********************************************************************************************************************/
/*!
 * Function: {void} VeKhoiGach(KhoiGach* pKhoiGach)
 *
 *@Brief: draw block object in ingameScence
 *@Param: pKhoiGach : pointer type of KhoiGach
 *@Return: <none>
 */
void VeKhoiGach(KhoiGach* pKhoiGach);

/*!
 * Function: {void} VeKhoiGach(KhoiGach* pKhoiGach)
 *
 *@Brief: delete block object in ingameSence
 *@Param: pKhoiGach : pointer type of KhoiGach
 *@Return: <none>
 */
void xoaKhoiGach(KhoiGach* pKhoiGach);

/*!
 * Function: {void} Ve_Next(int ID)
 *
 *@Brief: draw block object
 *@Param: pKhoiGach : pointer type of KhoiGach
 *@Return: <none>
 */
void Ve_Next(int ID);

/*!
 * Function: {void} Xoa_Next()
 *
 *@Brief: delete block object
 *@Param: <none>
 *@Return: <none>
 */
void Xoa_Next();





#endif // IVEXOAKHOIGACH_H_INCLUDED
