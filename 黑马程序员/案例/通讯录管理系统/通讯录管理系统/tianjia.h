#pragma once
#include <iostream>
#include <string>  // ��Ҫ���� string ����ʹ�� string ����

#define MAX 1000  // �����������

// ������ϵ�˽ṹ��
struct lianxiren
{
    int sex;        // �Ա���1Ů0
    int age;        // ����
    std::string l_name; // ����
    std::string phone;  // �绰
    std::string zhuzhi; // ��ͥסַ
};

// ����ͨѶ¼�ṹ��
struct tongxunlu
{
    struct lianxiren lianxirenArray[MAX]; // ������ϵ������
    int m_Size; // ͨѶ¼����Ա�ĸ���
};

// ��������
void addlianxiren(tongxunlu* abs);
