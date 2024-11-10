#include <iostream>
using namespace std;

#if 0
int main()
{
	int name[11];
	memset(name, 0, sizeof(name));// 把全部的元素置为0。
	name[0] = 0;// 不规范，有隐患，不推荐。
	return 0;
}
#endif // 0

