#include<iostream>
using namespace std;

class CGirl                 // 超女类CGirl。
{
public:
    string    name;          // 姓名。
    int         age;             // 年龄。
    void setvalue(string name1, int age1);    // 设置成员变量的值。
    void show()    // 显示超女的自我介绍。
    {
        cout << "姓名：" << name << "，年龄：" << age << endl;
    }
};

void CGirl::setvalue(string name1, int age1)    // 设置成员变量的值。
{
    name = name1;     age = age1;
}

int main()
{
    CGirl girl;       // 创建超女对象。
    girl.setvalue("西施", 26);     // 设置成员变量的值。
    girl.show();    // 显示超女的自我介绍。
}


/*1. * *类的成员函数可以直接访问该类其它的成员函数（可以递归） * *：
  - `show()` 函数可以直接调用类的其他成员函数（例如，`setvalue()` 可以在 `show()` 中被调用，如果需要）*/。

/*2. 类的成员函数可以重载，可以使用默认参数 ：
 - `setvalue` 函数可以重载为不同参数类型或数量的函数，例如：*/
 void setvalue(string name1 = "默认名", int age1 = 0);

 /*3. 类指针的用法与结构体指针用法相同 ：
 - 可以使用指向 `CGirl` 对象的指针，例如：*/
CGirl * pGirl = new CGirl();
pGirl->setvalue("王昭君", 28);
pGirl->show();
delete pGirl;

 /*4. * *类的成员可以是任意数据类型（类中枚举） * *：
- 可以在类中定义枚举类型，例如：*/
enum class Status { SINGLE, MARRIED, DIVORCED };
Status maritalStatus;

 /*5. 可以为类的成员指定缺省值（C++11标准）：
- 在类内可以直接给成员变量指定默认值：*/
string name = "默认名";
int age = 18;

 /*6. * *类可以创建对象数组，就像结构体数组一样 * *：
- 可以创建 `CGirl` 对象的数组，例如：*/
CGirl girls[10];

 /*7. * *对象可以作为实参传递给函数，一般传引用 * *：
- 可以将 `CGirl` 对象作为参数传递给函数，例如：*/
void printGirl(const CGirl & girl) {
    girl.show();
}

 /*8. * *可以用new动态创建对象，用delete释放对象 * *：
- 使用 `new` 和 `delete` 创建和销毁 `CGirl` 对象，如前面的例子所示。*/

 /*9. * *在类的外部，一般不直接访问（读和写）对象的成员，而是用成员函数 * *：
- 直接访问 `girl.name` 和 `girl.age` 不推荐，而是通过 `setvalue()` 和 `show()` 方法进行访问。*/

 /*10. * *对象一般不用memset()清空成员变量，可以写一个专用于清空成员变量的成员函数 * *：
- 可以定义一个清空成员变量的函数：*/
void clear() {
    name = "";
    age = 0;
}

 /*11. * *对类和对象用sizeof运算意义不大，一般不用 * *：
- `sizeof(CGirl)` 可能不太有用，因为它包括成员变量的大小，但并不反映对象的复杂性。*/

 /*12. * *用结构体描述纯粹的数据，用类描述对象 * *：
- `CGirl` 类不仅包含数据（如 `name` 和 `age`），还有功能（如 `setvalue()` 和 `show()`），与结构体的目的不同。*/

 /*13. * *在类的声明中定义的函数都将自动成为内联函数 * *：
- `show()` 函数在类中定义，因此它是一个内联函数，编译器可能会将其内联处理。*/

 /*14. * *为了区分类的成员变量和成员函数的形参，把成员变量名加m_前缀或_后缀，如m_name或name_ * *：
- 可以将 `name` 和 `age` 修改为 `m_name` 和 `m_age` 以区分成员变量和参数。*/
void setvalue(string m_name, int m_age) {
    name = m_name;
    age = m_age;
}

 /*15. * *类的分文件编写 * *：
- `CGirl` 类可以被分为头文件和实现文件，例如 `CGirl.h` 和 `CGirl.cpp`，以便于管理和复用。*/