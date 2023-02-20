#define _CRT_SECURE_NO_WARNINGS 1
#include "heap3.h"

void CreateHeap(heap* ph, int* arr, int n)
{
	assert(ph);
	//开辟空间
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	ph->data = tmp;
	ph->size = n;
	ph->capacity = n;
	//拷贝数组
	memcpy(ph->data, arr, sizeof(int) * n);
	//建堆算法
	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		//向下调整
		AdjustDown(ph->data, n, i);
	}
}

void AdjustDown(int* arr, int n, int pos)
{
	assert(arr);
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < n)
	{
		//判断
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[child] > arr[parent])//大堆调整
		{
			//交换
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Print(heap* ph)
{
	int i = 0;
	for (i = 0; i < ph->size; i++)
	{
		printf("%d ", ph->data[i]);
	}
	printf("\n");
}

void HeapSort(heap* ph)
{
	//建堆
	int i = 0;
	for (i = (ph->size - 1 - 1) / 2; i >= 0; i--)
	{
		//向下调整
		AdjustDown(ph->data, ph->size, i);
	}
	//排序
	//交换第一个和最后一个
	for (i = 1; i <= ph->size - 1; i++)
	{
		Swap(&ph->data[0], &ph->data[ph->size - i]);
		AdjustDown(ph->data, ph->size - i, 0);
	}
	//然后对剩下的进行排序
}