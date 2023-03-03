#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

int main()
{
	srand((unsigned int)time(NULL));
	int N = 300000;
	int* arr = (int*)malloc(sizeof(int) * N);
	if (!arr)
	{
		exit(-1);
	}
	int i = 0;
	for (i = 0; i < N; i++)
	{
		arr[i] = rand() + i;
	}
	Efficiency(arr, N);

	return 0;
}