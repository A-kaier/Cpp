#pragma once
#include <iostream>
#include <string>  // 需要包含 string 库来使用 string 类型

#define MAX 1000  // 定义最大容量

// 定义联系人结构体
struct lianxiren
{
    int sex;        // 性别：男1女0
    int age;        // 年龄
    std::string l_name; // 姓名
    std::string phone;  // 电话
    std::string zhuzhi; // 家庭住址
};

// 定义通讯录结构体
struct tongxunlu
{
    struct lianxiren lianxirenArray[MAX]; // 定义联系人数组
    int m_Size; // 通讯录中人员的个数
};

// 函数声明
void addlianxiren(tongxunlu* abs);
