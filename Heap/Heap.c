#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapInit(HP* php)
{
	php->data = NULL;
	php->size = 0;
	php->capacity = 0;
}

void HPCheckCapacity(HP* php)
{
	assert(php);
	if (php->size == php->capacity)
	{
		HPDatetype* tmp = (HPDatetype*)realloc(php->data, sizeof(HPDatetype) * (php->capacity * 2));
		if (!tmp)
		{
			perror("realloc");
			exit(-1);
		}
		php->data = tmp;
		php->capacity *= 2;
	}
	return;
}

void HeapCreate(HP* php, HPDatetype* arr, int size)
{
	HPDatetype* tmp = (HPDatetype*)malloc(sizeof(HPDatetype) * size);
	if (!tmp)
	{
		perror("malloc");
		exit(-1);
	}
	php->data = tmp;
	memcpy(php->data, arr, sizeof(HPDatetype) * size);
	php->capacity = php->size = size;
	//½¨¶ÑËã·¨
	int i = 0;
	for (i = (size - 2) / 2; i >= 0; i--)
	{
		AdjustDown(php->data, php->size, i);
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void AdjustDown(HPDatetype* arr, int size, int n)
{
	int parent = n;
	int child = n * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && arr[child] < arr[child + 1])
		{
			child += 1;
		}
		if (arr[parent] < arr[child])
		{
			Swap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void AdjustUp(HPDatetype* arr, int n)
{
	int child = n;
	int parent = (child - 1) / 2;
	while (arr[child] > arr[parent])
	{
		Swap(&arr[child], &arr[parent]);
		child = parent;
		parent = (child - 1) / 2;
	}
}


void HeapPush(HP* php, HPDatetype val)
{
	assert(php);
	HPCheckCapacity(php);
	php->data[php->size] = val;
	AdjustUp(php->data, php->size);
	php->size++;

}

void HeapPop(HP* php)
{
	assert(php);
	if (php->size <= 0)
	{
		return;
	}
	Swap(&php->data[0], &php->data[php->size - 1]);
	php->size--;
	AdjustDown(php->data, php->size, 0);
}

void HeapPrint(HP* php)
{
	assert(php);
	int i = 0;
	for (; i < php->size; i++)
	{
		printf("%d ", php->data[i]);
	}
	printf("\n");
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->data);
	free(php);
	php = NULL;
}

