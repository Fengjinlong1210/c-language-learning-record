#define _CRT_SECURE_NO_WARNINGS 1
#include "TopK.h"

void CreateHeap(heap* ph, datatype* arr, int n)
{
	assert(ph);

	//��������
	datatype* tmp = (datatype*)malloc(sizeof(datatype) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	ph->data = tmp;
	ph->size = ph->capacity = n;
	memcpy(ph->data, arr, sizeof(datatype) * n);
	//�����㷨
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDownMax(ph->data, n, i);
	}

}

//��ѵ���
void AdjustDownMax(datatype* arr, int n, int pos)
{
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] < arr[child + 1])//���
		{
			child++;
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

//С�ѵ���
void AdjustDownMin(datatype* arr, int n, int pos)
{
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] > arr[child + 1])//
		{
			child++;
		}
		if (arr[parent] > arr[child])
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

void PushHeap(heap* ph, datatype val)
{
	assert(ph);
	CheckCapacity(ph);
	ph->data[ph->size] = val;
	AdjustUp(ph->data, ph->size);
	ph->size++;

}


void CheckCapacity(heap* ph)
{
	assert(ph);
	if (ph->size == ph->capacity)
	{
		datatype* tmp = (datatype*)realloc(ph->data, sizeof(datatype) * (4 + ph->capacity));
		if (!tmp)
		{
			perror("realloc");
			return;
		}
		ph->data = tmp;
		ph->capacity += 4;
	}
}

void AdjustUp(datatype* arr, int pos)
{
	int child = pos;
	int parent = (pos - 1) / 2;
	while (child > 0)
	{
		if (arr[child] > arr[parent])//���
		{
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void PopHeap(heap* ph)//ɾ���Ѷ�
{
	assert(ph);
	if (ph->size > 0)
	{
		Swap(&ph->data[0], &ph->data[ph->size - 1]);
		ph->size--;
		AdjustDownMax(ph->data, ph->size, 0);
	}
}

void HeapSort(heap* ph)
{
	assert(ph);
	int i = 0;

	for (i = (ph->size - 2) / 2; i >= 0; i--)
	{
		AdjustDownMin(ph->data, ph->size, i);
	}
	for (i = 1; i < ph->size; i++)
	{
		Swap(&ph->data[0], &ph->data[ph->size - i]);
		AdjustDownMin(ph->data, ph->size - i, 0);
	}
}

//topk���⣺��������k�����֣�Ҫ����k��С��С��
//Ȼ��Ѻ����n-k������������Ѷ����ݽ��бȽϣ�������ڶѶ����ͽ����滻Ȼ�����µ���

void TopK(datatype* arr, int n, int k)
{
	assert(arr);
	//��k��С�Ķ�
	int i = 0;
	for (i = (k - 2) / 2; i >= 0; i--)
	{
		AdjustDownMax(arr, k, i);
	}

	//����
	//for (i = 1; i < k; i++)
	//{
	//	Swap(&arr[0], &arr[k - i]);
	//	AdjustDownMin(arr, k - i, 0);
	//}
	int end = k - 1;
	while (end >= 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDownMax(arr, k, end);
		end--;
	}

	//���жԱ�
	for (i = k; i < n; i++)
	{
		if (arr[i] < arr[0])
		{
			Swap(&arr[i], &arr[0]);
			AdjustDownMax(arr, k, 0);
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");


}

void DistroyHeap(heap* ph)
{
	assert(ph);
	datatype* tmp = ph->data;
	free(tmp);
	ph->data = NULL;
	ph->capacity = ph->size = 0;
}
