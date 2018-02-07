#include"stdafx.h";
#include "MatrixLib.h";
void MatrixLib::MatrixClass::transpose()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			resultMat[j][i] = mat1[i][j];
		}
	}
}
