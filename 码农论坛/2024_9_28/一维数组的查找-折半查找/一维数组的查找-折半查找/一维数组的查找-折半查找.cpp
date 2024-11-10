#include <iostream>
using namespace std;

// 1.函数声明，接受一个整数数组arr，数组长度len，以及要查找的键值key,失败返回-1;
int search(int arr[], int key, int len)
{
    // 2.初始化三个变量，low为查找区间的第一个元素的下标，high为最后一个元素的下标，mid为中间点。
    int low = 0, high = len - 1, mid;

    // 3.当low小于或等于high时，继续查找;
    while (low <= high)
    {
        // 4.计算中间点的位置。
        mid = (low + high) / 2;
        // 5.如果中间点的值等于要查找的键值，返回中间点的索引
        if (arr[mid] == key) return mid;
        // 6.如果中间点的值大于键值，将查找区间缩小到前半部分。
        else if (arr[mid] > key) high = mid - 1;
        // 7.如果中间点的值小于键值，将查找区间缩小到后半部分。
        else low = mid + 1;
    }
    // 8.如果循环结束都没有找到键值，返回-1表示查找失败。
    return -1;
}

int main()
{
    // 9.定义并初始化一个已排序的数组。
    int a[10] = { 1,3,5,7,9,11,13,15,17,19 };
    // 10.调用search函数查找值19，如果返回值大于或等于0，表示找到了，打印成功消息。
    if (search(a, 7, 19) >= 0) cout << "在数组a中查找19成功\n" << endl;
    // 11.如果没有找到，打印失败消息。
    else cout << "打印消息失败" << endl;

    return 0;
}


