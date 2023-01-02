#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//-------------------------水仙花数------------------------------
//int test(int num, int count)
//{
//	int tmp = num;
//	if (tmp > 9)
//	{
//		return test(tmp / 10, count) + pow(tmp % 10, count);
//	}
//	else
//		return pow(tmp, count);
//}
//
//int pow(int num, int index)
//{
//	int n = 1;
//	while (index)
//	{
//		n *= num;
//		index--;
//	}
//	return n;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 0;
//
//		int j = i;
//		while (j)
//		{
//			count++;
//			j /= 10;
//		}
//		ret = test(i, count);
//		if (i == ret)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//-------------------------------------------------------
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int num = n;
//
//	for (i = 0; i < 5; i++)
//	{
//		while (i)
//		{
//			num = num * 10 + n;
//			break;
//		}
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//-------------------------------------------------------
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//偶数：一块钱1.5瓶
//奇数：15：22.5
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d\n", (int)(n * 1.5));
//	}
//	if (n % 2 == 1)
//	{
//		printf("%d\n", (int)(n * 1.5 - 0.5));
//	}
//	return 0;
//}

//--------------------------结构体-----------------------------
//struct human
//{
//	double height;
//	double weight;
//};
//
//struct stu
//{
//	char name[20];
//	int age;
//	struct human;
//};
//
//struct stu a = { "zhangsan",20, 180.3, 70.6 };
//struct stu* pa = &a;
//
//void print(struct stu* pa)
//{
//	printf("%s %d %lf %lf\n", pa->name, pa->age, pa->height, pa->weight);
//}
//
//int main()
//{
//	printf("%d\n", sizeof(a));//结构体大小是结构体成员大小相加
//	printf("%d\n", sizeof(pa));
//	print(pa);
//	//结构体最好利用传址调用，节省内存空间
//	return 0;
//}

//-----------------------二级指针--------------------------------
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//二级指针第一个*表示ppa指向的类型是int*的变量，第二个*表示ppa是一个指针
//	return 0;
//}

//int main()
//{
//	int* arr[10] = { NULL };
//	//指针数组，int*表示arr数组的类型是int*
//	return 0;
//}

//-------------------------变种水仙花数------------------------------
int test(int num)
{
	int i = 0;
	int sum = 0;
	for (i = 10; i <= 10000; i *= 10)
	{
		sum += (num % i) * (num / i);
	}
	return sum;
}

int main()
{
	int i = 0;
	for (i = 10000; i < 100000; i++)
	{
		int ret = 0;
		ret = test(i);
		if (i == ret)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}