#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void TestQuickSort()
{
	int n = 10;
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		tmp[i] = rand() % 100;
	}
	QuickSort2(tmp, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", tmp[i]);
	}
	printf("\n");
}

void TestMergeSort()
{
	int n = 20;
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		tmp[i] = rand() % 100;
	}
	MergeSortNonR(tmp, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", tmp[i]);
	}
	printf("\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	//TestQuickSort();
	TestMergeSort();
	return 0;
}