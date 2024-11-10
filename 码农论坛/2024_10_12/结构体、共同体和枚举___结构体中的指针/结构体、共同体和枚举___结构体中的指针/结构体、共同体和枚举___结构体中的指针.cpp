#include <iostream>
#include<cstring>
using namespace std;
/*
	struct string
{
	char* ptr;   // 指向动态分配内存的地址。
 ......
}
*/

#if 1
struct st_qq
{
	int aqq = 12;
	int bqq = 11;
};

int main()
{
	st_qq QQ;
	memset(&QQ, 0, sizeof(st_qq)); // 清空
	
	QQ.aqq = 10;
	QQ.bqq = 12;
	cout << "aqq: " << QQ.aqq << ", bqq: " << QQ.bqq << endl;
	
	return 0;
}
#endif // 0

#if 0
struct st_t
{
	int a;	
	int *p;
};

int main()
{
	st_t stt;
	memset(&stt,0,sizeof(st_t));
	stt.a = 10;
	// 动态创建一个长度为100的整型数组，让指针stt.p指向数组的地址。
	stt.p = new int [20];
	cout<<"sizeof(stt) = "<<sizeof(stt)<<endl;
	cout << "调用前：stt.a=" << stt.a << ",stt.p=" << stt.p << endl;
//	memset(&stt, 0, sizeof(st_t));
	stt.a = 0; // 清空内存
	// 清空成员p指向的内存中的内容。
	memset(stt.p,0,100 *sizeof(int));
	cout << "调用后：stt.a=" << stt.a << ",stt.p=" << stt.p << endl;
	// 释放动态分配的内存。
	delete[] stt.p;
	return 0;
}
#endif

#if 0

struct st_girl
{
	string name;
};

int main()
{
	st_girl girl;
	girl.name  ="西施";
	cout<<"girl.name = "<<girl.name<<endl;
	memset(&girl,0,sizeof(st_girl));
	cout<<"girl.name = "<<girl.name<<endl;
	girl.name = "嫦娥";
	cout<<"girl.name = "<<girl.name<<endl;
	
	return 0;
}
#endif
