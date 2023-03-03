#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void InsertSort(int* arr, int n)
{
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
		}
		arr[end + 1] = tail;
	}
}

void ShellSort(int* arr, int n)
{
	int gap = n;
	int i = 0;
	while (gap > 1)
	{
		gap /= 2;
		//gap > 1时，进行预排序
		//gap == 1时， 插入排序
		for (i = 0; i < n - gap; i++)
		{
			int end = i;
			int tail = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > tail)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tail;
		}
	}

}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void SelectSort(int* arr, int n)
{
	int begin = 0;
	int end = n - 1;
	int min = begin;
	int max = begin;
	while (begin <= end)
	{
		int i = 0;
		for (i = begin + 1; i <= end; i++)
		{
			min = max = begin;
			if (arr[i] < arr[min])
			{
				min = i;
			}
			if (arr[i] > arr[max])
			{
				max = i;
			}
		}
		Swap(&arr[begin], &arr[min]);
		if (max == begin)
		{
			max = min;
		}
		Swap(&arr[end], &arr[max]);

		begin++;
		end--;
	}
}

void Efficiency(int* arr, int N)
{

	int t1 = clock();
	InsertSort(arr, N);
	int t2 = clock();

	int t3 = clock();
	ShellSort(arr, N);
	int t4 = clock();

	int t5 = clock();
	SelectSort(arr, N);
	int t6 = clock();

	printf("InsertSort: %lf\n", (double)((t2 - t1)/1000.0));
	printf("ShellSort: %lf\n", (double)((t4 - t3) / 1000.0));
	printf("SelectSort: %lf\n", (double)((t6 - t5) / 1000.0));

}