#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

//命名空间  标准库中的std
using namespace std;

namespace fjl
{
	int a = 10;
	char name[] = "fengjinlong";
	int add(int a, int b)
	{
		return a + b;
	}
}

//两个名字相同的命名空间，编译器会自动合成

namespace fjl
{
	int b = 100;
}

namespace zs
{
	//命名空间嵌套
	int a = 10;
	char name[] = "zhangsan";
	namespace zs1 
	{
		int b = 20;
		int a = 15;
	}
}

void Func(int a = 10, int b = 20, int c = 30)
//全缺省
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void Func2(int a, int b, int c = 10, int d = 20)
//半缺省
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

int main()
{
	//全缺省参数：
	Func2(1,2,3);//参数从左到右赋值
	return 0;
}

//int main()
//{
//	////第一种命名空间使用方法：直接使用整个命名空间
//	//cout << "hello world" << endl;
//
//	////第二种: 在使用的时候前面加库的名字::
//	//std::cout << "hello world" << std::endl;
//
//	////第三种，部分声明 ： using std::cout
//
//	//cout << "a = " << fjl::a << endl;
//	//cout << "name = " << fjl::name << endl;
//	//cout << "10+20 = " << fjl::add(10, 20) << endl;
//
//	//cout << zs::a << endl;
//	//cout << zs::name << endl;
//	//cout << zs::zs1::a << endl;
//	//cout << zs::zs1::b << endl;
//	int a = 0;
//	int b = 0;
//	cin >> a;
//	cin >> b;
//	cout << fjl::add(a, b) << endl;
//	return 0;
//}