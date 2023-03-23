#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//重载函数
	//1.函数参数个数不同
//void Add(int a, int b, int c)
//{
//	cout << "a + b + c = " << a + b + c << endl;
//}
//
//void Add(int a, int b)
//{
//	cout << "a + b = " << a + b << endl;
//}

//int main()
//{
//	Add(1, 2, 3);
//	Add(1, 2);
//	return 0;
//}

	//2.参数类型不同
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swap(double* p1, double* p2)
{
	double tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	Swap(&c, &d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//	return 0;
//}
	//3.参数顺序不同
void Add(int a, double b)
{
	cout << "a + b = " << a + b << endl;
}

void Add(double c, int d)
{
	cout << "c + d = " << c + d << endl;

}

//int main()
//{
//	Add(10, 3.14);
//	Add(3.14, 10);
//	return 0;
//}

//引用


//int main()
//{
//	int a = 10;
//	//b是对a的引用 都代表同一块空间
//	int& b = a;
//	int* pa = &a;
//	//引用在定义时必须初始化
//	//每个变量可以有多个引用
//
//
//	cout << "&a = " << &a << endl;
//	cout << "&b = " << &b << endl;
//	cout << "&pa = " << &pa << endl;
//
//	return 0;
//}


void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}