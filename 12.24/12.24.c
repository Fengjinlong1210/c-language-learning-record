#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//---------------------------------------------------------------------------------------
//数据类型
// char\short\int\long\long long\float\double\unsigned
// 
//变量、常量
//字符串、转义字符、注释
//语句
//函数
//数组
//操作符
//常见关键字
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(unsigned int));
//	//sizeof计算变量或操作符所占空间的大小
//	//sizeof不是c语言库函数，是一个操作符
//	//sizeof在计算变量内存大小时，可以省略括号
//	//计算数据类型时，不能省略括号
//	//sizeof计算数组大小时，数组名表示整个数组
//
//	int a = 10;
//	printf("%d\n", sizeof a);
//
//	return 0;
//}

//变量、常量
//
//int a = 10;//全局变量
//
//enum sex //中间用逗号隔开
//{
//	Male=10,//从零开始的,向后加1
//	Female
//};
//
//int main()
//{
//	//全局变量、局部变量
//	//全局变量创建在最外部
//	//大括号内部的叫做局部变量
//	//全局变量和局部变量可以同名，优先使用局部变量
//	
//	printf("%d\n", a);
//	//作用域：一个名字所能使用的范围就是这个变量的作用域
//	//局部变量的作用域就是其所在的局部范围
//	//全局变量的作用域就是整个程序
//
//	//生命周期：变量从创建到销毁的一个时间段
//
//	//常量
//	//1.字面量  1.2   
//	//2.const修饰的常变量（本质还是变量）
//	//3.#define 定义的常量
//	//4.枚举常量
//	printf("%d\n", Male);
//	printf("%d\n", Female);
//
//	return 0;
//}

//字符串、转义字符
//int main()
//{
//	//由双引号引起来的"abcdefg"叫做字符串字面量，即字符串
//	//字符串的结尾是\0，记作字符串的结束标志，不计入字符串长度
//	//strlen计算字符串的长度，以\0作为结尾，是库函数
//
//	//转义字符：改变字符原有的意思
//	// '' "" \单引号、双引号、斜杠都需要转义字符
//	printf("%c\n", '\'');//
//	printf("%c\n", '\"');
//	printf("%c\n", '\\');
//
//
//	return 0;
//}

//语句
	//选择语句：if 、else if、else、switch、
	//循环语句：while、do while、for


//关键字static

//static修饰局部变量，使其存储在静态区，改变了局部变量的生命周期，程序停止才结束

//void test2()
//{
//	static int a = 2;
//	a++;
//	printf("%d\n", a);
//}
//
//void test1()
//{
//	int b = 2;
//	b++;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		//test1();
//		test2();
//		i++;
//	}
//	return 0;
//}

//static修饰全局变量，使全局变量只能在本源文件中使用，
//static修饰函数，使函数只能在本源文件内使用

//extern引入外部变量
//#include <string.h>
//int main()
//{
//	//printf("%d\n", '\060');
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}

//int max_cmp(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", max_cmp(a, b));
//	return 0;
//}

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    while (a > 0)
//    {
//        printf("%d ", a % 10);
//        a = a / 10;
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int sum = 0;
//	float avg = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	avg = (float)sum / 5.0;
//	printf("%.1f", avg);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int hour = 0;
//	int sec = 0;
//	int min = 0;
//	scanf("%d", &a);
//	hour = a/60/60;
//	min = a%3600/60;
//	sec = a % 60;
//
//	printf("%d %d %d\n", hour, min, sec);
//	return 0;
//}

//结构体

//struct stu
//{
//	char name[20];
//	int age;
//	double grade;
//};
//
//int main()
//{
//	//struct stu a;
//	//scanf("%s %d %f", a.name, &(a.age), &(a.grade));
//	//printf("%s %d %f\n", a.name, a.age, a.grade);
//
//	//结构体指针
//
//	struct stu b = { "fengjinlong",21,100.1 };
//	struct stu* pb = &b;
//	printf("%s %d %f\n", pb->name, pb->age, pb->grade);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int x = 0;
//	int min = 0;
//	scanf("%d", &n);
//	x = n / 12;
//	min = x * 4 + 2;
//	printf("%d\n", min);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	ret = printf("Hello world!\n");
//	printf("%d\n", ret);
//	return 0;
//}
//a~z 97~122
//A~Z 65~90

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if ((ch >= 65 && ch <= 90)||(ch>=97 && ch<=122))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}

//控制语句：顺序语句、选组语句(if\switch)、循环语句(while\do while\for)

//break用于终止循环，
//continue用于跳过本次循环后面的部分，直接跳到下一次循环的判断部分

//int main()
//{
//	//清空缓冲区
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;//k=0,也就是表达式的值为0，判断不通过
//	}
//	return 0;
//}

//折半查找法
