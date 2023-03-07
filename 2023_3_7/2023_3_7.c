#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void TestQuickSort()
{
	int n = 20;
	int* arr = (int*)malloc(sizeof(int) * n);
	if (!arr)
	{
		perror("malloc");
		exit(-1);
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	QuickSort(arr, 0, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	//TestQuickSort();
//	int arr[] = { 6,1,0,9,8,4,2,3,7,5 };
//	int sz = sizeof(arr) / sizeof(int);
//	QuickSort3(arr, 0, sz);
//	return 0;
//}

double cpdrate(int year, int capital, double rate)
{
	return capital * pow(1.0 + rate, year);
}

double func2(int year, int capital, double rate)
{
	if (year > 0)
	{
		return cpdrate(year - 1, capital, rate) + func2(year - 1, capital, rate);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int capital = 20000;
	float rate = 0.1;
	int year = 10;
	double ret = func2(year, capital, rate);
	printf("%lf\n", ret);
	return 0;
}