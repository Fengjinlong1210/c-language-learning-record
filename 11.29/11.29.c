#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//-------------------------------------------冒泡排序------------------------------------------------
// 局限性：只能排序一种类型的数组
//void showarr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void sort(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	showarr(arr, sz);
//	sort(arr, sz);
//	showarr(arr, sz);
//	return 0;
//}

//-----------------------------------------qsort库函数--------------------------------------------------
#include <stdlib.h>
void showarr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int mycmp(const void *a, const void *b)		//自定义函数  用void接受参数,在进行强制类型转换,可以接受多种类型参数
{
	return *(int*)a - *(int*)b;				//返回解引用的结果,根据返回值,qsort决定是否交换
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), mycmp);
	showarr(arr, sz);
	return 0;
}