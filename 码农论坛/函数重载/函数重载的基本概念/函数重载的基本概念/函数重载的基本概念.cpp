#include<iostream>
using namespace std;

void func1(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void func2(string& a, string& b)
{
	string tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 3, b = 6;
	func1(a, b);
	cout << "a + b = " << a + b << endl;

	string c = "西施";
	string d = "西瓜";
	cout << "c = " << c << "， d = " << d << endl;

	string e = "西施";
	int f = 10;
	cout << "c = " << c << "， f = " << f << endl;


	return 0;
}