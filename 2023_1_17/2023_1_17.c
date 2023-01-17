#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//柔性数组
//两种方式：创建数组/创建指针变量

//typedef struct test1
//{
//	char a;
//	int arr[];//柔性数组
//}Test1;
//Test1 p1;//结构体变量
//
//int main()
//{
//	int i = 0;
//	Test1* ptr1 = &p1;//创建指针变量
//	ptr1 = (Test1*)malloc(sizeof(Test1) + sizeof(int) * 10);
//	//为ptr1开辟一块连续的内存空间
//	if (!ptr1)
//	{
//		//判断开辟空间有效性
//		perror("ptr1:");
//		return 1;
//	}
//	
//	ptr1->a = 'a';
//	
//	for (i = 0; i < 10; i++)
//	{
//		ptr1->arr[i] = i;//赋值
//	}
//	
//	printf("%c\n", ptr1->a);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr1->arr[i]);
//	}
//	
//	free(ptr1);//释放内存
//	ptr1 = NULL;
//
//	return 0;
//}

/// <summary>
/// 创建指针变量
/// </summary>
//typedef struct test2
//{
//	char a;
//	int b;
//	int* arr;
//}Test2;
//
//Test2 p2;
//
//int main()
//{
//	int i = 0;
//	Test2* ptr2 = &p2;
//	
//	ptr2 = (Test2*)malloc(sizeof(Test2));
//	if (!ptr2)
//	{
//		return 1;
//	}
//	ptr2->a = 'a';
//	ptr2->b = 10;
//	ptr2->arr = (int*)malloc(sizeof(int) * 10);
//	if (!ptr2->arr)
//	{
//		perror("ptr2->arr:");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ptr2->arr[i] = i;
//	}
//	printf("%c\n", ptr2->a);
//	printf("%d\n", ptr2->b);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr2->arr[i]);
//	}
//	free(ptr2->arr);
//	ptr2 = NULL;
//	free(ptr2);
//	ptr2 = NULL;
//
//	//需要free两次内存，不方便释放
//	return 0;
//}

//----------------------改数字---------------------------------
#include <math.h>

int main()
{
	int num = 0;
	int sum = 0;
	int i = 0;

	scanf("%d", &num);
	//123
	while (num > 0)
	{
		sum += (num % 2) * (int)pow(10, i);
		num /= 10;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}