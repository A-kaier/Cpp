#include <iostream>
using namespace std;

int main() {
    int n;  // �����е�Ԫ�ظ���
    cin >> n;  // �������ֵĸ���
    
    int max_num;  // �����洢���ֵ
    
    // �����һ��������ʼ�����ֵ
    cin >> max_num;
    
    // �������������n-1���������������ֵ
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;  // ������һ����
        
        // �Ƚϵ�ǰ���͵�ǰ�����ֵ���������ֵ
        if (num > max_num) {
            max_num = num;
        }
    }
    
    // ����ҵ������ֵ
    cout << max_num << endl;
    
    return 0;
}

