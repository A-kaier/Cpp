#include <iostream>
using namespace std;

int main() {
    int n;  // 数列中的元素个数
    cin >> n;  // 输入数字的个数
    
    int max_num;  // 用来存储最大值
    
    // 输入第一个数并初始化最大值
    cin >> max_num;
    
    // 继续输入其余的n-1个数，并查找最大值
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;  // 输入下一个数
        
        // 比较当前数和当前的最大值，更新最大值
        if (num > max_num) {
            max_num = num;
        }
    }
    
    // 输出找到的最大值
    cout << max_num << endl;
    
    return 0;
}

