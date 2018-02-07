#include"stdafx.h";
#include "MatrixLib.h";
void MatrixLib::Class1::transpose()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			resultMat[j][i] = mat1[i][j];
		}
	}
}
