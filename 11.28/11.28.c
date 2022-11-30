#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//------------------------------------------函数指针-------------------------------------------------
//函数指针的形式  返回值类型 （*指针名）（参数类型）
//例如  int (*p)(int,double);
//函数名就是函数地址
//函数指针<==>函数名<==>*函数指针(解引用符号被忽略)
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*padd)(int, int) = Add;
//  int (*padd)(int, int) = &Add;
// 
//	int ret = padd(20, 30);
//	printf("%d\n", ret);
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	printf("%p\n", padd);//三者打印的地址完全相同
//
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", padd(2, 3));
//	printf("%d\n", (*padd)(2, 3));
//	printf("%d\n", (**padd)(2, 3));
//	printf("%d\n", (************************padd)(2, 3));//结果相同
//	//说明*解引用符号在函数指针中可以省略
//	return 0;
//}

//----------------------------------------函数指针数组---------------------------------------------------
//函数指针数据声明  返回类型 (*p[])(参数类型、函数参数个数);
//例如 int (*p[])(int ,int );
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int main()
//{
//	int (*parr[])(int, int) = { add,sub,mul };
//	int ret = parr[0](1, 2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//---------------------------------------------多层括号----------------------------------------------
//(*(void (*)())0)()
//将0指针强制类型转换成函数指针，函数指针返回类型为void，无参数
//然后对转换后的0指针进行解引用

//void (* signal(int ,void (*)(int )))(int)
//void (*                            )(int)
//signal(int ,void(*)(int )) 
//signal 是一个函数，返回类型是函数指针，参数是int 和 另一个函数指针
//signal 前面的*说明signal的返回值类型是函数指针

//利用typedef简化这段代码
//typedef void(*pfun_t)(int)
//pfun_t (signal(int ,pfun_t))

//-----------------------------------利用函数指针数组（转移表）---------------------------------------------

void menu()
{
	printf("****************************\n");
	printf("***** 1.add       2.sub ****\n");
	printf("***** 3.mul       4.div ****\n");
	printf("********  0.exit  **********\n");
	printf("\n");

}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	menu();

	int input = 0;
	int a = 0;
	int b = 0;
	int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
	printf("enter a number\n");
	scanf("%d", &input);

	do {
		if (input >= 1 && input <= 4)
		{

			printf("enter two number\n");
			scanf("%d %d", &a, &b);
			int ret = parr[input](a, b);
			printf("%d\n", ret);
		}
		else
		{
			printf("illegal input \n");
		}

	} while (input);



	return 0;
}
