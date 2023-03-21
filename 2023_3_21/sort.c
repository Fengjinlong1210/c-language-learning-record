#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

//��������

void CountingSort(int* arr, int n)
{
	//�ȱ���һ���ҳ����ֵ����Сֵ
	int i = 0;
	int max = arr[0];
	int min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int gap = max - min + 1;

	int* tmp = (int*)calloc(gap, sizeof(int));
	if (!tmp)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		tmp[arr[i] - min]++;	
	}

	//
	int k = 0;
	for (int j = 0; j < gap; j++)
	{
		while (tmp[j]--)
		{
			arr[k++] = j + min;
		}
	}
	free(tmp);
}