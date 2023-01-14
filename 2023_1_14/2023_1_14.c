#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//枚举类型
//只能使用枚举类型给枚举变量赋值
//typedef enum SEX
//{
//	MALE = 1,//给枚举变量赋初值，后面的值每次递增1
//	FEMALE,
//}sex;
//
//int main()
//{
//	printf("%d\n", sizeof(sex));
//	return  0;
//}

//联合类型
//多个变量公用同一块空间
//union test
//{
//	char ch;	
//	int a;
//};
//
//union test un;//创建变量
//
//int main()
//{
//	printf("%p\n", &(un.a));
//	printf("%p\n", &(un.ch));
//	un.a = 0x11223344;
//	un.ch = 0x55;
//	printf("%x\n", un.ch);
//	return 0;
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


//动态内存分配
//malloc
// void* malloc(size_t num)
// 申请内存空间，以字节为单位

//calloc
// void* calloc(size_t num, size_t size)	个数，每个大小

//free
// 释放分配的内存
// 释放后需要手动置为空指针

//realloc
// void* realloc(void* ptr, size_t num)
//修改已经申请过的内存空间
// 如果原本的内存空间不够开辟新的大小，函数会重新寻找一块足够大的空间
// 并且返回新的地址

//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(40);//申请一块40字节的内存空间
//	if (NULL != p)//申请成功才能使用
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//传值调用，不能修改str的值
//	printf(str);
//	//未释放内存空间
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//正确版
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//传址调用，修改str的值
//	printf(str);
//	//释放内存空间
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//动态内存分配函数使用注意事项
//1.不能对空指针进行解引用，申请内存空间后要判断指针是否为空

//2.不能对申请的空间越界访问，只能访问申请部分的空间

//3.使用后要及时释放空间，否则会出现内存泄漏

//4.不能释放未申请的内存空间（非动态内存开辟的空间）

//5.不能释放一部分申请的空间

//6.对同一块空间多次释放

//错误的案例
// 
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//生命周期结束
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//未释放
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//释放后不能使用原本的地址
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}