 	
#include<iostream>
using namespace std;

// �����ַ�������
string s1, s2;
// �����������飬�ֱ����ڴ洢��ͬ������
int a[201] = {0}, b[201] = {0}, c[201] = {0}; // ��ʼ��Ϊ0

// ���ַ���ת��Ϊ��������
void arr(string src, int des[])
{
    for (int i = 0; i < src.size(); i++)
    {
        des[src.size() - 1 - i] = src[i] - '0';
    }
}

// �Ƚ������ַ����Ĵ�С�����ȸ��ݳ��Ƚ��бȽ�
// ������ͬ���ֵ�˳��Ƚ�
bool cmpster(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return str1.size() >= str2.size();
    }
    else
    {
        return str1 >= str2;
    }
}

// ��������ִ�д�����������
int main()
{
    cin >> s1 >> s2;
    // �Ƚ������ַ��� s1 �� s2��������ǲ���ȣ��򽻻����߲���� "-"
    if (!cmpster(s1, s2))
    {
        swap(s1, s2);
        cout << "-";
    }

    // �������ڻ�ȡ�ַ��� s1 �� s2 �Ĵ�С��������洢�� la �� lb ��
    // ͬʱ���� arr ������ s1 �� s2 ���д���
    int la = s1.size(), lb = s2.size();
    arr(s1, a);
    arr(s2, b);
    int lc = max(la, lb);

    // ������ 0 �� lc ����������
    for (int i = 0; i <= lc; i++)
    {
        // ������� a �е�ĳ��Ԫ��С������ b ����Ӧ��Ԫ��
        // ��� a ���������� + 1���ȥǰ�������
        if (a[i] < b[i])
        {
            a[i + 1]--;
            a[i] += 10;
        }

        // ��������a��b��ӦԪ�صĲ�ֵ����������洢������c��
        c[i] = a[i] - b[i];
    }
    
    // ѭ������ lc ��ֵ��ֱ�� lc ���� 1 �� c[lc] ������ 0
    while (lc > 0 && c[lc] == 0) lc--;

    // �ô�������ڴ� lc �� 0 ��������ַ����� c ��Ԫ��
    for (int i = lc; i >= 0; i--)
    {
        cout << c[i];
    }

    return 0;
}
