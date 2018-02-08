#pragma once
#include "Stdafx.h"
#include <iostream>
//using namespace System;

namespace MatrixLib {

	class __declspec(dllexport) MatrixClass
	{
		// TODO: Add your methods for this class here.
	private:
		int **mat1;
		int **mat2;
		int **resultMat;
		int row1;
		int row2;
		int col1;
		int col2;
	public:
		
		MatrixClass();
		void add();
		void sub();
		void MatrixMultiplication();
		void transpose();
		void displayMatrix();
		void displayMatrix1();
		void displayMatrix2();
	};
}
