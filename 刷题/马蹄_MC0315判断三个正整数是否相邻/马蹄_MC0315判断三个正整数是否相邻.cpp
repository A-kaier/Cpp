#include<iostream>
#include<algorithm> // ���� sort()

using namespace std;

int main()
{
    int a[3];

    // ��ȡ��������
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    // ��������
    sort(a, a + 3);

    // �ж��Ƿ�������������
    if (a[0] + 1 == a[1] && a[1] + 1 == a[2]) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

    return 0;
}

