#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
using namespace std;

/*

inline 函数声明和定义不能被分开，因为inline函数不被存放到符号表中
会导致链接失败

int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}

*/


/*
auto关键字，当类型名太长时，可以使用auto关键字声明
使用auto变量时必须进行初始化，否则编译器无法清楚类型



int main()
{
	int a = 10l;
	auto b = a;
	auto pa = &a;//用auto声明指针时加不加*没有区别
	//auto* paa = &a;
	auto& ra = a;
	//auto声明引用时必须加&

	cout << typeid(b).name() << endl;
	cout << typeid(pa).name() << endl;
	cout << typeid(ra).name() << endl;

	return 0;
}


auto在一行声明多个变量时，必须具有相同的类型

int main()
{
	auto a = 10, b = 20;
	auto c = 30, d = 41.5;//会报错
	return 0;
}


auto不能作为函数的参数，void Test(auto a)
auto不能声明数组

struct BinaryTreeNode
{
	int val;
	struct BinaryTreeNode* next;
};

int main()
{
	BinaryTreeNode a;
	auto b = a;
	return 0;
}

*/

/*
基于范围的for循环

原本的for循环
for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
{
	//statement
}

基于范围的for循环
int array[] = {1,2,3,4,5,6,7,8,9};
for(auto X : array)
冒号前面的部分表示用于迭代的变量，冒号后面的部分表示迭代的范围

迭代的范围必须是确定的，在函数传参为首元素地址时，无法确定迭代的范围



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (auto a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
*/

/*
NULL被定义为
#define NULL 0
在函数重载的情况下可能会出现匹配错误


void func(int)
{
	cout << "func(int)" << endl;
}

void func(int*)
{
	cout << "func(int*)" << endl;
}

int main()
{
	func(1);
	func(NULL);//会匹配到func(int*)
	return 0;
}
*/

/*
类的引入


struct Stack
{
	//c++中，struct中也可定义函数
	void Init(int capacity = 4)
	{
		int* data = (int*)malloc(sizeof(int) * capacity);
		if (!data)
		{
			perror("malloc");
			return;
		}
		_capacity = capacity;
		_data = data;
		_top = 0;
	}

	int* _data;
	int _capacity;
	int _top;
};
*/
int main()
{
	Stack st;
	st.Init(4);
	return 0;
}