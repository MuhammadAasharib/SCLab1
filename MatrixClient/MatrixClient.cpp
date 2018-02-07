// MatrixClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../MatrixLib/MatrixLib.h"


int main()
{
	MatrixLib::MatrixClass* c1 = new MatrixLib::MatrixClass();
	c1->add();
	c1->displayMatrix();
    return 0;
}

