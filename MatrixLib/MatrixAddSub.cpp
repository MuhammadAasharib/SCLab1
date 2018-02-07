#include "stdafx.h";
#include<iostream>
#include "MatrixLib.h"
using namespace std;
void MatrixLib::MatrixClass::add()
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			MatrixLib::MatrixClass::resultMat[i][j] = MatrixLib::MatrixClass::mat1[i][j] + MatrixLib::MatrixClass::mat2[i][j];
		}
	}
}
void MatrixLib::MatrixClass::sub()
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			MatrixLib::MatrixClass::resultMat[i][j] = MatrixLib::MatrixClass::mat1[i][j] - MatrixLib::MatrixClass::mat2[i][j];
		}
	}
}
