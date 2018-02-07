#pragma once

using namespace System;

namespace MatrixLib {

	public ref class Class1
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
		Class1();
		void add();
		void sub();
		void MatrixMultiplication();
		void transpose();
		void displayMatrix();
	};
}
