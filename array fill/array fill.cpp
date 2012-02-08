// array fill.cpp : main project file.
/*
 * file main.cpp
 * created by Nightmare
 * on 5 Эях 2008
 */

#include "stdafx.h"
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

using std::ofstream;

using std::setprecision;

using std::fabs;

using std::clock;

using namespace System;

int main(array<System::String ^> ^args)
{
	clock_t outTime , inTime;
	ofstream outFile("stats.txt");	// variables required for measuring and storing the results.

	unsigned int size = 0;	// variables needed for the program itself.
	double *A;

	outTime = clock();

	for(size = 1000000 ; size <= 50000000 ; size += 250000)
	{
		A = new double[size];
		inTime = clock();		
		for(int c = 0 ; c < size ; ++c)
			A[c] = c;
		outFile<<clock()-inTime<<endl;
		delete[] A;
	}

	outFile<<"\n\n"<<clock()-outTime<<endl;



	system("PAUSE");
	return 0;
} // end function main
