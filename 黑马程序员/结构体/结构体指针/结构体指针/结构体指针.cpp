#include<iostream>
using namespace std;

struct myStruct
{
	int age;
	int qian;
	int shengao;
};

int main()
{
	struct myStruct arr = { 18,88888,191 };
	myStruct* p = &arr;
	p->qian = 99999;

	cout
		<< "年龄：" << p->age
		<< "，余额：" << p->qian
		<< "，身高：" << p->shengao
		<< endl;

	return 0;
}