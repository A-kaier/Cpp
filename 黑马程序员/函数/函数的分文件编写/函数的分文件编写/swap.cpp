#define _crt_secure_no_warnings
#include<iostream>
using namespace std;

#include"swap.h"

// �����Ķ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
