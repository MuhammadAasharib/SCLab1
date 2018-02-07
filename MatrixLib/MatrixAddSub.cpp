#include "stdafx.h";
#include<iostream>
#include "MatrixLib.h"
using namespace std;
void MatrixLib::Class1::add()
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			MatrixLib::Class1::resultMat[i][j] == MatrixLib::Class1::mat1[i][j] + MatrixLib::Class1::mat2[i][j];
		}
	}
}
void MatrixLib::Class1::sub()
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			MatrixLib::Class1::resultMat[i][j] == MatrixLib::Class1::mat1[i][j] - MatrixLib::Class1::mat2[i][j];
		}
	}
}
