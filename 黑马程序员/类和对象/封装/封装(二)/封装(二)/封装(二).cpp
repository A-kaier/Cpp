#include <iostream>
using namespace std;

/*类在设计时，可以把属性和行为放在不同的权限下，加以控制
	   访问权限有三种：
		   三种权限
			   公共权限  public     类内可以访问  类外可以访问
			   保护权限  protected  类内可以访问  类外不可以访问
			   私有权限  private    类内可以访问  类外不可以访问*/

class studeng
{
public:
	string name;
protected:
	string pen;
private:
	string qian;
private:
	//public:
	void stuqian()
	{
		name = "张三";
		pen = "铅笔";
		qian = "666666";
	}
};

int main()
{
	studeng s1;
	s1.name = "李四";
	s1.pen = "铅笔"; //保护权限类外访问不到
	s1.stuqian(); //私有权限类外访问不到

	return 0;
}
