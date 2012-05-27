//	Copyright (C) 2008-2009, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
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

/* file main.cpp
 * created on 5 Íïå 2008
 */

#include <iostream>
using std::cout;
using std::endl;

#include <ctime>
using std::clock;



int main()
{
	clock_t outTime , inTime;

	unsigned int size = 0;	// variables needed for the program itself.
	double *A;

	outTime = clock();

	for(size = 1000000 ; size <= 50000000 ; size += 250000)
	{
		A = new double[size];
		inTime = clock();		
		for(unsigned int c = 0 ; c < size ; ++c)
			A[c] = c;
		cout<<(clock()-inTime)*(1000.0/CLOCKS_PER_SEC)<<'\n';
		delete[] A;
	}

	cout<<"\n\n"<<(clock()-outTime)*(1000.0/CLOCKS_PER_SEC)<<endl;

	return 0;
} // end function main
