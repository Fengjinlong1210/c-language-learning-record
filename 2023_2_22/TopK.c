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
	//建堆算法
	int i = 0;
	for (i = (n - 2) / 2; i >= 0; i--)
	{
		//向下调整
		AdjustDownMin(ph->data, n, i);
	}
}


void AdjustDownMin(datatype* arr, int n, int pos)
{
	//向下调整为小堆
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
	//向下调整为大堆
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
//	//求n个数的前k个大值，用前k个元素建小堆
//	int i = 0;
//	for (i = (k - 2) / 2; i >= 0; i--)
//	{
//		AdjustDownMin(arr, k, i);
//	}
//
//	//用后面n-k个元素逐渐替换堆顶元素，替换之后向下继续调整为小堆
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
	//求n个数的前k个小值，用前k个元素建大堆
	int i = 0;
	for (i = (k - 2) / 2; i >= 0; i--)
	{
		AdjustDownMax(arr, k, i);
	}

	//用后面n-k个元素逐渐替换堆顶元素，替换之后向下继续调整为小堆
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