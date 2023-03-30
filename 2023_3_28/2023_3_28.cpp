#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
/*
int main()
{
	Date d1;
	Date d2;
	d1.Init(2022, 1, 2);
	d2.Init(2023, 3, 28);

	d1.Print();
	d2.Print();

	d1.TestThisptr();
	d2.TestThisptr();
	return 0;
}
*/


/*

this指针
c++在类的成员函数中，增加了一个隐藏的指针，用来指向这个类变量
这个操作是由编译器自动完成的

this本质上是类成员函数的一个隐藏形参，在栈中存放，vs用寄存器

*/

//int main()
//{
//	test* pt = nullptr;
//	pt->Print();//即使是空指针也可以调用函数
//	pt->PrintMember();//报错，对空指针进行解引用
//	return 0;
//}

int main()
{
	Stack st1;
	st1.Init(8);
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);
	st1.Push(4);
	st1.Push(5);
	st1.Push(6);
	st1.Push(7);
	st1.Push(8);
	st1.Push(9);
	st1.Pop();
	st1.Pop();
	st1.Pop();
	st1.Pop();
	int ret = st1.TopOfStack();
	cout << ret << endl;
	return 0;
}