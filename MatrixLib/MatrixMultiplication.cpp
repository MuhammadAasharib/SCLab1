#include "stdafx.h"
#include "MatrixLib.h"
#include <iostream>
using namespace std;

void MatrixLib::MatrixClass::MatrixMultiplication() {
	if (col1 != row2) {
		std::cout << "Matrix multiplication not possible" << std::endl;
		return;
	}

	else {
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col2; j++) {
				for (int k = 0; k < col1; k++){
					int a1 = mat1[i][k];
					int a2 = mat2[k][j];
					resultMat[i][j] += a1 * a2;
				}
			}
		}
	}
}