#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

void HeapInit(heap* php)
{
	assert(php);
	php->size = php->capacity = 0;
	php->data = NULL;
}

void HeapCreate(heap* php, HPDataType* arr, int n)
{
	assert(php);
	HPDataType* tmp = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (!tmp)
	{
		perror("malloc");
		exit(-1);
	}
	php->data = tmp;
	memcpy(php->data, arr, sizeof(HPDataType) * n);
	php->size = n;
	php->capacity = n;
	//排序
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(php->data, php->size, i);
	}
}

void HeapExpand(heap* php)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = (php->capacity == 0) ? 4 : (2 * php->capacity);
		HPDataType* tmp = (HPDataType*)realloc(php->data, sizeof(HPDataType) * newcapacity);
		if (!tmp)
		{
			perror("realloc");
			exit(-1);
		}
		php->data = tmp;
		php->capacity = newcapacity;
	}
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void AdjustUp(HPDataType* arr, heap* php)
{
	assert(arr);
	int child = php->size - 1;
	int parent = (child - 1) / 2;
	while (php->data[child] > php->data[parent])
	{
		Swap(&php->data[child], &php->data[parent]);
		child = parent;
		parent = (child - 1) / 2;
	}
}

void AdjustDown(HPDataType* arr, int size, int parent)
{
	assert(size > 0);
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[child] > arr[parent])
		{
			Swap(arr + child, arr + parent);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(heap* php, HPDataType val)
{
	assert(php);
	//开辟空间
	//如果空间为0，则新开辟空间，否则扩展为两倍
	HeapExpand(php);

	//插入数据
	php->data[php->size] = val;
	php->size++;

	//调整堆
	AdjustUp(php->data, php);
}

void HeapPop(heap* php)
{
	assert(php);
	assert(php->size > 0);

	Swap(&php->data[0], &php->data[php->size - 1]);
	php->size--;
	AdjustDown(php->data, php->size, 0);
}


void Print(heap* php)
{
	int i = 0;
	for (i = 0; i < php->size - 1; i++)
	{
		printf("%d ", php->data[i]);
	}
}