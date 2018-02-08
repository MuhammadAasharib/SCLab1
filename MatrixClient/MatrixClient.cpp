// MatrixClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../MatrixLib/MatrixLib.h"
using namespace MatrixLib;

int main()
{
	MatrixClass* c1 = new MatrixClass();
	std::cout << "First Matrix is: " << std::endl;
	c1->displayMatrix1();
	std::cout << "Second Matrix is: " << std::endl;
	c1->displayMatrix2();
	std::cout << "add" << std::endl;
	
	c1->add();
	c1->displayMatrix();

	std::cout << "subtract" << std::endl;
	MatrixClass* c2 = new MatrixClass();
	c2->sub();
	c2->displayMatrix();

	std::cout << "multiplication" << std::endl;
	MatrixClass* c3 = new MatrixClass();
	c3->MatrixMultiplication();
	c3->displayMatrix();

	std::cout << "transpose" << std::endl;
	MatrixClass* c4 = new MatrixClass();
	c4->transpose();
	c4->displayMatrix();

    return 0;
}

