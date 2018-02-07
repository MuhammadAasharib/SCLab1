// This is the main DLL file.

#include "stdafx.h"
#include <iostream>
#include "MatrixLib.h"

MatrixLib::Class1::Class1() {
	//initializing the number of rows and columns
	row1 = 2;
	col1 = 2;
	row2 = 2;
	col2 = 2;

	//initialize mat1
	for (int i = 0; i < Class1::row1; i++) {
		for (int j = 0; j < Class1::col1; j++) {
			mat1[i][j] = i + j;
		}
	}

	//initilize mat2
	for (int i = 0; i < Class1::row1; i++) {
		for (int j = 0; j < Class1::col1; j++) {
			mat2[i][j] = i - j;
		}
	}

}

void MatrixLib::Class1::displayMatrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << resultMat[i][j];
		}
	}
}






