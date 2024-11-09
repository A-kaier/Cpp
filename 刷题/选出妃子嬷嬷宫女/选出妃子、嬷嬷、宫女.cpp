#include <iostream>
using namespace std;

/*
在界面上输入超女数据后，按下列要求选出妃子、宫女和嬷。
妃子：1）年龄18-25岁；2）身高165-178cm；3）身材火辣；4）颜值漂亮。小
宫女：1）年龄18-30岁；2）身高160-165cm；3）身材火辣或者普通；4）颜值漂亮。，个
嬷嬷：1）年龄35-40岁；2）身高155-165cm；3）身材普通或者飞机场；4）颜值一般。
1) 超女数据用结构体表示；
2）先输入超女全部的数据项，然后才进行选秀
3）用逻辑表达式组合判断条件，不要用嵌套if语句。
*/

struct st_girl
{
	int age;
	int height;
	string sc;//.C++风格字符串
	bool yz;// true-漂亮；false-一般。
}stgirl;



int main()
{
	cout<<"请输入年龄：";cin>>stgirl.age;
	cout<<"请输入身高：";cin>>stgirl.height;
	cout<<"请输入身材：";cin>>stgirl.sc;
	cout<<"请输入颜值：";cin>>stgirl.yz;
	
//	cout
//		<<"年龄："<<stgirl.age
//		<<"，身高："<<stgirl.height
//		<<"，身材："<<stgirl.sc
//		<<"，颜值："<<stgirl.yz
//		<<endl;
		
//	妃子：1）年龄18-25岁；2）身高165-178cm；3）身材火辣；4）颜值漂亮。
	if((stgirl.age>= 18) && ( stgirl.age <= 25) && (stgirl.height >= 165) && (stgirl.height <= 178) && (stgirl.sc == "火辣") && (stgirl.yz == true))
	{
		cout<<"是妃子"<<endl;
	}
//	宫女：1）年龄18-30岁；2）身高160-165cm；3）身材火辣或者普通；4）颜值漂亮。
	if((stgirl.age>= 18) && ( stgirl.age <= 30) && (stgirl.height >= 160) && (stgirl.height <= 165) && ((stgirl.sc == "火辣") || (stgirl.sc == "普通"))&& (stgirl.yz == true))
	{
		cout<<"是宫女"<<endl;
	}
//	嬷嬷：1）年龄35-40岁；2）身高155-165cm；3）身材普通或者飞机场；4）颜值一般。
	if((stgirl.age>= 35) && ( stgirl.age <= 40) && (stgirl.height >= 155) && (stgirl.height <= 165) && ((stgirl.sc == "普通") || (stgirl.sc == "飞机场"))&& (stgirl.yz == false))
	{
		cout<<"是嬷嬷"<<endl;
	}

	return 0;
}


