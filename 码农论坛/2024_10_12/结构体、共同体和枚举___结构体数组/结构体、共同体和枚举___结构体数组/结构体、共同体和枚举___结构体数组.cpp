﻿#define _CRT_SECURE_NO_WARNINGS       // C标准的字符串操作函数需要加这一行。
#include <iostream>         // 包含头文件。
#include<cstring>
using namespace std;        // 指定缺省的命名空间。

// 超女基本信息结构体st_girl，存放了超女全部的数据项。
struct st_girl
{
	char name[21];        // 姓名。
	int age;                     // 年龄。
	double weight;        // 体重（kg）。
	char sex;                   // 性别：X-女；Y-男。
	bool yz;                    // 颜值：true-漂亮；false-不漂亮。
};

int main()
{
	// st_girl stgirl={"西施",26,33.8,'X',true};        // 创建结构体变量。
	st_girl girls[3];
	memset(girls, 0, sizeof(girls));    // 清空整个数组。
	
	strcpy((girls + 0)->name, "西施"); (girls + 0)->age = 25; girls[0].weight = 45; girls[0].sex = 'X'; girls[0].yz = true;
	girls[1] = { "西瓜",2,10.6,'Y',false };     // C++11标准的语法。
	*(girls + 2) = { "冰冰",23,50.3,'X',true };
	
	for (int ii = 0; ii < 3; ii++)
	{
		cout << "姓名：" << (girls + ii)->name 
		<< "，年龄：" << (girls + ii)->age 
		<< "，体重：" << girls[ii].weight
		<< "，性别：" << girls[ii].sex 
		<< "颜值：" << girls[ii].yz << endl;
	}
	
}
