#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
常量引用
int main()
{
	const int a = 10;
	//int& b = a;  错误:权限扩大
	const int& b = a;

	//int& c = 10;  //错误，c是常数，发生权限扩大
	const int& c = 10;


	return 0;
}
*/


//引用做函数参数
/*
void Swap(int& a, int& b)
{
	//形参是实参的引用
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 100;
	int b = 0;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
*/

//引用做函数返回值 :出了函数作用域后，返回的参数仍然存在，才可以使用引用返回
/*
int& Func()
{
	static int n = 0;
	n++;
	return n;
}

int main()
{

	int i = 0; 
	for (i = 0; i < 10; i++)
	{
		int& a = Func();

		cout << "a = " << a << endl;
	}

	return 0;
}
*/

//传引用和传值调用的效率比较

//传值调用每次都要拷贝一份实参，所以效率较为低下
/*
struct Arr
{
	int arr[10000];
};

void conveyReference(Arr& a)
{
	return;
}

void conveyValue(Arr a)
{
	return;
}

int main()
{
	Arr a;
	int i = 0;
	size_t t1 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyReference(a);
	}
	size_t t2 = clock();

	size_t t3 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyValue(a);
	}
	size_t t4 = clock();

	cout << "convey Reference:" << t2 - t1 << endl;

	cout << "convey Value:" << t4 - t3 << endl;

	return 0;
}
*/

//返回引用与返回值的效率对比
//返回值也需要对实参进行临时拷贝，效率较低

/*
struct Arr
{
	int arr[10000];
};

Arr& conveyReference(Arr& a)
{
	return a;
}

Arr conveyValue(Arr a)
{
	return a;
}

int main()
{
	Arr a;
	int i = 0;
	size_t t1 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyReference(a);
	}
	size_t t2 = clock();

	size_t t3 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyValue(a);
	}
	size_t t4 = clock();

	cout << "convey Reference:" << t2 - t1 << endl;

	cout << "convey Value:" << t4 - t3 << endl;

	return 0;
}
*/

//引用和指针的区别

//从语法上来看，引用是变量的别名，但从底层实现上，引用也是通过指针来实现的


int main()
{
	int a = 10;
	
	int& ra = a;
	ra = 20;

	int* pa = &a;
	*pa = 20;

	return 0;
}

//引用和指针的区别
/*
1. 引用从语法上是一个变量的别名，指针存储变量的地址

2. 引用才创建时必须初始化，指针可以不用初始化

3. 引用不能改变指向，指针可以改变指向(引用不可以为空，指针可以为空)

4. sizeof(引用)指的是引用的类型大小，sizeof(指针)指的是指针变量的大小

5. 引用++表示引用代表的变量增加，指针++表示指针指向的地址向后移动一个单位

6. 指针有多级指针，引用没有多级引用

7. 指针访问变量需要自行解引用，引用访问变量由编译器处理

8. 引用比指针相对安全

*/


//内联函数inline

//编译器在调用内联函数时会在调用的地方直接展开函数，不会开辟调用函数的栈帧
//能够提升运行效率，但会使可执行程序的大小变大
//编译器不一定会对函数进行inline，通常对代码量较小的函数进行inline

//inline函数不建议声明和定义分离