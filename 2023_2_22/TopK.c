#define _CRT_SECURE_NO_WARNINGS 1
#include "TopK.h"

void CreateHeap(heap* ph, datatype* arr, int n)
{
	assert(ph);
	datatype* tmp = (datatype*)malloc(sizeof(datatype) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	ph->data = tmp;
	ph->capacity = ph->size = n;
	memcpy(ph->data, arr, sizeof(datatype) * n);
	//�����㷨
	int i = 0;
	for (i = (n - 2) / 2; i >= 0; i--)
	{
		//���µ���
		AdjustDownMin(ph->data, n, i);
	}
}


void AdjustDownMin(datatype* arr, int n, int pos)
{
	//���µ���ΪС��
	assert(arr);
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] > arr[child + 1])
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

void AdjustDownMax(datatype* arr, int n, int pos)
{
	//���µ���Ϊ���
	assert(arr);
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] > arr[child + 1])
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

//datatype* TopK(datatype* arr, int n, int k)
//{
//	assert(arr);
//	datatype* ret = (datatype*)malloc(sizeof(datatype) * k);
//	if (!ret)
//	{
//		perror("malloc");
//		return NULL;
//	}
//	//��n������ǰk����ֵ����ǰk��Ԫ�ؽ�С��
//	int i = 0;
//	for (i = (k - 2) / 2; i >= 0; i--)
//	{
//		AdjustDownMin(arr, k, i);
//	}
//
//	//�ú���n-k��Ԫ�����滻�Ѷ�Ԫ�أ��滻֮�����¼�������ΪС��
//	int end = n - 1;
//	while (end >= k)
//	{
//		if (arr[0] < arr[end])
//		{
//			Swap(&arr[0], &arr[end]);
//			AdjustDownMin(arr, k, 0);
//		}
//		end--;
//
//	}
//	memcpy(ret, arr, sizeof(datatype) * k);
//	
//	return ret;
//}


datatype* TopK(datatype* arr, int n, int k)
{
	assert(arr);
	datatype* ret = (datatype*)malloc(sizeof(datatype) * k);
	if (!ret)
	{
		perror("malloc");
		return NULL;
	}
	//��n������ǰk��Сֵ����ǰk��Ԫ�ؽ����
	int i = 0;
	for (i = (k - 2) / 2; i >= 0; i--)
	{
		AdjustDownMax(arr, k, i);
	}

	//�ú���n-k��Ԫ�����滻�Ѷ�Ԫ�أ��滻֮�����¼�������ΪС��
	int end = n - 1;
	while (end >= k)
	{
		if (arr[0] > arr[end])
		{
			Swap(&arr[0], &arr[end]);
			AdjustDownMax(arr, k, 0);
		}
		end--;

	}
	memcpy(ret, arr, sizeof(datatype) * k);

	return ret;
}