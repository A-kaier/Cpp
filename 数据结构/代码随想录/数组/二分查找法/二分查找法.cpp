#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {-1, 0, 3, 5, 9, 12};
    int left, right;
    int target, middle;
    left = 0;
    // ���������С������target������ұյ������[left, right]
    right =  nums.size() - 1; // sizeof(nums) / sizeof(nums[0]) - 1;

    cout << "������Ҫ���ҵ�Ŀ��ֵ: ";
    cin >> target; // ��ȡĿ��ֵ

    while (left <= right)   //  ��left==right������[left, right]��Ȼ��Ч�������� <=
    {
        middle = (left + right) / 2; // ��ֹ��� ��ͬ��(left + right)/2
        if (nums[middle] > target)
        {
            right = middle - 1; // �����ұ߽硢 target �������䣬����[left, middle - 1] 
        }
        else if (nums[middle] < target)
        {
            left = middle + 1; // ������߽硢 target �������䣬����[middle + 1, right] 
        }
        else
        {
        	// nums[middle] == target
        	cout << "�ҵ�Ŀ��ֵ " << target << " ������Ϊ: " << middle << endl;
            return middle; // �ҵ�Ŀ��ֵ����������
        }
    }
	 cout << "δ�ҵ�Ŀ��ֵ " << target << endl;
    return -1; // δ�ҵ�Ŀ��ֵ������-1
   
}

