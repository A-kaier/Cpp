﻿#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	for (int i = 0; i < 5; i++)
	{
		cout << "*(p+" << i << ")的值是:" << *(p + i)<< endl;
		//cout << endl;
		cout << "p[" << i << "]的值是:" << p[i] << endl;
	}


	return 0;
}