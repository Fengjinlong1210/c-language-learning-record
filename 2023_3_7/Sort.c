#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end - 1)
	{
		return;
	}
	//end是数组后面的一个元素，直接使用end会越界
	int left = begin;
	int right = end - 1;
	int key = left;
	while (left < right)
	{
		//右边先找
		while (left < right && arr[right] >= arr[key])
		{
			right--;
		}
		//左边后找
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;
	QuickSort(arr, begin, key);
	QuickSort(arr, key + 1, end);
}


//双指针
//定义两个指针指向数组元素，prev从第一个元素开始
//cur从第二个元素开始

void QuickSort2(int* arr, int begin, int end)
{
	if (begin >= end - 1)
	{
		return;
	}
	int prev = begin;
	int cur = prev + 1;
	int key = begin;
	while (cur < end)
	{
		if (arr[cur] < arr[key] && ++prev != cur)
		{
			Swap(&arr[prev], &arr[cur]);
		}
		cur++;
	}
	Swap(&arr[prev], &arr[key]);
	key = prev;
	QuickSort2(arr, begin, key);
	QuickSort2(arr, key + 1, end);
}

void QuickSort3(int* arr, int begin, int end)
{
	if (begin >= end - 1)
	{
		return;
	}
	int left = begin;
	int right = end - 1;
	int key = arr[left];
	int hole = left;
	while (left < right)
	{
		while (left < right && key <= arr[right])
		{
			right--;
		}
		arr[hole] = arr[right];
		hole = right;
		while (left < right && key >= arr[left])
		{
			left++;
		}
		arr[hole] = arr[left];
		hole = left;
	}
	arr[hole] = key;

	QuickSort3(arr, begin, hole);
	QuickSort3(arr, hole + 1, end);
}
