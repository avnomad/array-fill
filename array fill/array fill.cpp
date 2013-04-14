//	Copyright (C) 2008-2009, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of array fill.
 *
 *	array fill is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	array fill is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with array fill.  If not, see <http://www.gnu.org/licenses/>.
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
		for(unsigned int c = 0 ; c < size ; ++c)
			A[c] = c;
		outFile<<clock()-inTime<<endl;
		delete[] A;
	}

	outFile<<"\n\n"<<clock()-outTime<<endl;



	system("PAUSE");
	return 0;
} // end function main
