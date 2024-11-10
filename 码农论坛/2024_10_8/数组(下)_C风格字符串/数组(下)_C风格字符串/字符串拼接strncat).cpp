#include <iostream>
using namespace std;

#if 0
int main()
{
	char* strncat(char* dest, const char* src, const size_t n);
	/*
		功能：将src字符串的前n个字符拼接到dest所指的字符串尾部。
		返回值：返回dest字符串的起始地址。
		如果n大于等于字符串src的长度，那么将src全部追加到dest的尾部，如果n小于字符串src的长度，只追加src的前n个字符。
		strncat会将dest字符串最后的0覆盖掉，字符追加完成后，再追加0。
		如果参数dest所指的内存空间不够大，会导致数组的越界。
	*/
	return 0;
}
#endif // 0