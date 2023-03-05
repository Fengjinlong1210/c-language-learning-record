#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void InsertSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(int);
	InsertSort(arr, sz);
	Print(arr, sz);
}

void ShellSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(int);
	ShellSort(arr, sz);
	Print(arr, sz);
}


void SelectSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(int);
	SelectSort(arr, sz);
	Print(arr, sz);
}

void BubbleSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(int);
	BubbleSort(arr, sz);
	Print(arr, sz);
}

void HeapSortTest()
{
	int* arr = (int*)malloc(sizeof(int) * NUM);
	if (!arr)
	{
		return;
	}
	for (int i = 0; i < NUM; i++)
	{
		arr[i] = rand() + i;
	}
	HeapSort(arr, NUM);
	Print(arr, NUM);
}

int main()
{
	srand((unsigned int)time(0));
	//InsertSortTest();
	//ShellSortTest();
	//SelectSortTest();
	//BubbleSortTest();
	//HeapSortTest();
	Efficiency();
	return 0;
}