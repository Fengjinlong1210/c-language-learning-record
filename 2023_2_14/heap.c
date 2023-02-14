#define _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"

void HeapInit(heap* php)
{
	assert(php);
	php->size = php->capacity = 0;
	php->data = NULL;
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


void AdjustHeap(HPDataType* arr, heap* php)
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


void HeapPush(heap* php, HPDataType val)
{
	assert(php);
	//���ٿռ�
	//����ռ�Ϊ0�����¿��ٿռ䣬������չΪ����
	HeapExpand(php);

	//��������
	php->data[php->size] = val;
	php->size++;

	//������
	AdjustHeap(php->data, php);
}
