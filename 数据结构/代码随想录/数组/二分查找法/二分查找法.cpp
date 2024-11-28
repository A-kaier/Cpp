#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {-1, 0, 3, 5, 9, 12};
    int left, right;
    int target, middle;
    left = 0;
    // 计算数组大小、定义target在左闭右闭的区间里，[left, right]
    right =  nums.size() - 1; // sizeof(nums) / sizeof(nums[0]) - 1;

    cout << "请输入要查找的目标值: ";
    cin >> target; // 获取目标值

    while (left <= right)   //  当left==right，区间[left, right]依然有效，所以用 <=
    {
        middle = (left + right) / 2; // 防止溢出 等同于(left + right)/2
        if (nums[middle] > target)
        {
            right = middle - 1; // 更新右边界、 target 在左区间，所以[left, middle - 1] 
        }
        else if (nums[middle] < target)
        {
            left = middle + 1; // 更新左边界、 target 在右区间，所以[middle + 1, right] 
        }
        else
        {
        	// nums[middle] == target
        	cout << "找到目标值 " << target << " 的索引为: " << middle << endl;
            return middle; // 找到目标值，返回索引
        }
    }
	 cout << "未找到目标值 " << target << endl;
    return -1; // 未找到目标值，返回-1
   
}

