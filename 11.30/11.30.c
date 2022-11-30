#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//-----------------------------------------回调函数--------------------------------------------------
//函数指针作为另一个函数的参数


//模拟计算器

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	printf("please enter a number\n");
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &input);
//	//定义函数指针数组
//	int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
//
//	printf("enter number\n");
//	scanf("%d %d", &a, &b);
//	int ret = 0;
//	ret = parr[input](a, b);//parr[]调用函数,()进行传参
//	printf("ret = %d\n", ret);
//	return 0;
//}

//----------------------------------------------qsort---------------------------------------------

//void show(const void* arr, int sz, int width)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((char*)arr+(i*width)));
//	}
//}
//
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;			//升序
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	show(arr, sz, sizeof(arr[0]));
//	return 0;
//}

//-------------------------------------------模拟实现qsort------------------------------------------------
//int cmp_int(const void* a, const void* b)	//升序
//{
//	return *(int*)a - *(int*)b;				//通过返回值来控制升序或降序
//											//升序,返回大于0的数字
//											//降序,返回小于0的数字
//}
//
//void show(const void* arr, int sz, int width)//打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((char*)arr+(i*width)));//强制类型转换成char*指针,(i+width)控制访问权限
//	}
//}
//
//void swap(char* a, char* b,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = 0;						//交换地址内容
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//	}
//}
//
//void simulate_qsort(void* base, int sz, int width, int (*cmp_int)(void* a, void* b))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j=0; j < sz - 1 - i; j++)
//		{
//			if (cmp_int((char*)base + (j * width),(char*)base + (j + 1) * width) > 0)
//			{
//				//交换arr[j] <==> arr[j+1]
//				swap((char*)base + (j * width), (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	simulate_qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	show(arr, sz, sizeof(arr[0]));
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------
