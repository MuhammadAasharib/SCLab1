// This is the main DLL file.

#include "stdafx.h"
#include <iostream>
#include "MatrixLib.h"

MatrixLib::MatrixClass::MatrixClass() {
	//initializing the number of rows and columns
	row1 = 2;
	col1 = 2;
	row2 = 2;
	col2 = 2;

	//initialize mat1
	mat1 = new int*[2];
	for (int i = 0; i < 2; i++) {
		mat1[i] = new int[2];
	}

	for (int i = 0; i < MatrixClass::row1; i++) {
		for (int j = 0; j < MatrixClass::col1; j++) {
			mat1[i][j] = i + j;
		}
	}

	//initilize mat2
	mat2 = new int*[2];
	for (int i = 0; i < 2; i++) {
		mat2[i] = new int[2];
	}
	for (int i = 0; i < MatrixClass::row1; i++) {
		for (int j = 0; j < MatrixClass::col1; j++) {
			mat2[i][j] = i - j;
		}
	}

	//initialize mat3
	resultMat = new int*[2];
	for (int i = 0; i < 2; i++) {
		resultMat[i] = new int[2];
	}
	for (int i = 0; i < MatrixClass::row1; i++) {
		for (int j = 0; j < MatrixClass::col1; j++) {
			resultMat[i][j] = 0;
		}
	}
}

void MatrixLib::MatrixClass::displayMatrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << resultMat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void MatrixLib::MatrixClass::displayMatrix1()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << mat1[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void MatrixLib::MatrixClass::displayMatrix2()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << mat2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}






