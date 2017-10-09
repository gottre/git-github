// FibonacciSequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	cout << x << " address " << &x <<endl;
	int y = 1;
	cout << y <<" address y: " << &y << endl;

	for (int index = 0; index < 10; index++)
	{
		int *out_1 = &x;
		*out_1 = x + y;
		cout << *out_1 << endl;
		cout << "addres out_1: " << out_1 << endl;

		int *out_2 = &y;
		*out_2 = *out_1 + y;
		cout << *out_2 << endl;
		cout << "addres out_2: " << out_2 << endl;
		x = *out_1;
		y = *out_2;
	}
	//cout << "addres x: " << &x << endl;
	int pause;
	cin >> pause;
    return 0;
}

