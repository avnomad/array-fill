/*
 * file main.cpp
 * created by Nightmare
 * on 5 Эях 2008
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
		for(int c = 0 ; c < size ; ++c)
			A[c] = c;
		cout<<(clock()-inTime)*(1000.0/CLOCKS_PER_SEC)<<'\n';
		delete[] A;
	}

	cout<<"\n\n"<<(clock()-outTime)*(1000.0/CLOCKS_PER_SEC)<<endl;

	return 0;
} // end function main
