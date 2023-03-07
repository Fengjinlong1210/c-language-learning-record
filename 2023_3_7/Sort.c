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
	//end����������һ��Ԫ�أ�ֱ��ʹ��end��Խ��
	int left = begin;
	int right = end - 1;
	int key = left;
	while (left < right)
	{
		//�ұ�����
		while (left < right && arr[right] >= arr[key])
		{
			right--;
		}
		//��ߺ���
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


//˫ָ��
//��������ָ��ָ������Ԫ�أ�prev�ӵ�һ��Ԫ�ؿ�ʼ
//cur�ӵڶ���Ԫ�ؿ�ʼ

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
