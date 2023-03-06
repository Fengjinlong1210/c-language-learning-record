#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void InsertSort(int* arr, int n)
{
	//插入排序
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int tail = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > tail)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
			arr[end + 1] = tail;
		}
	}
}


//void QuickSort(int* arr, int begin, int lenth)
//{
//	//begin是数组的开始位置
//	//lenth代表长度
//	//一轮排序
//	if (begin >= lenth - 1)
//	{
//		return;
//	}
//	int left = begin;
//	int right = lenth - 1;
//	int key = left;
//	while (left < right)
//	{
//		while (right >left && arr[right] >= arr[key])
//		{
//			right--;
//		}
//		while (left < right && arr[left] <= arr[key])
//		{
//			left++;
//		}
//		Swap(&arr[left], &arr[right]);
//	}
//	Swap(&arr[left], &arr[key]);
//	key = left;
//	QuickSort(arr, begin, key);
//	QuickSort(arr, key + 1, lenth);
//
//}


//快速排序
void QuickSort1(int* arr, int begin, int lenth)
{
	if (begin >= lenth - 1)
	{
		return;
	}
	int left = begin;
	int right = lenth - 1;
	int key = left;
	while (left < right)
	{
		while (right > left && arr[right] >= arr[key])//右边找小
		{
			right--;
		}
		//左边找大
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;
	QuickSort1(arr, begin, key);
	QuickSort1(arr, key + 1, lenth);
}


//快速排序的两种优化
//1.取begin end mid三个数中的中间数，将其设置为key，和begin交换位置

int getmid(int* arr, int begin, int end)
{
	int mid = (end - begin) / 2;
	if (arr[begin] > arr[end])
	{
		if (arr[mid] > arr[end])
		{
			return arr[begin] > arr[mid] ? mid : begin;
		}
		else//arr[mid] < arr[end]
		{
			return end;
		}

	}
	else//arr[begin] < arr[end]
	{
		if (arr[mid] > arr[begin])
		{
			return arr[end] > arr[mid] ? mid : end;
		}
		else//arr[mid] < arr[begin]
		{
			return begin;
		}

	}
}

void QuickSort2(int* arr, int begin, int lenth)
{
	if (begin >= lenth - 1)
	{
		return;
	}
	int mid = getmid(arr, begin, lenth - 1);
	Swap(&arr[mid], &arr[begin]);

	int left = begin;
	int right = lenth - 1;
	int key = left;
	while (left < right)
	{
		while (right > left && arr[right] >= arr[key])//右边找小
		{
			right--;
		}
		//左边找大
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;
	QuickSort2(arr, begin, key);
	QuickSort2(arr, key + 1, lenth);
}

//2.对于区间较小的排序，用插入排序取代递归

void QuickSort3(int* arr, int begin, int lenth)
{
	if (begin >= lenth - 1)
	{
		return;
	}
	if ((lenth - begin) < 3)
	{
		InsertSort(arr + begin + 1, lenth - begin);
	}
	int left = begin;
	int right = lenth - 1;
	int key = left;
	while (left < right)
	{
		while (right > left && arr[right] >= arr[key])//右边找小
		{
			right--;
		}
		//左边找大
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;
	QuickSort3(arr, begin, key);
	QuickSort3(arr, key + 1, lenth);
}