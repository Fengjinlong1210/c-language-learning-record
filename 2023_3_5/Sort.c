#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

void Print(int* arr, int n)
{
	int i = 0;	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}

void InsertSort(int* arr, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int tail = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > tail)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tail;
	}
}

void ShellSort(int* arr, int n)
{
	int i = 0;
	int gap = n;
	while (gap > 0)
	{
		gap /= 2;
		for (i = 0; i < n - gap; i++)
		{
			int end = i;
			int tail = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > tail)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tail;
		}
	}

}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void SelectSort(int* arr, int n)
{
	int head = 0;
	int tail = n - 1;

	while (head < tail)
	{
		int i = 0;
		int max = head;
		int min = head;
		for (i = head + 1; i <= tail; i++)
		{
			if (arr[i] > arr[max])
			{
				max = i;
			}
			if (arr[i] < arr[min])
			{
				min = i;
			}
		}
		Swap(&arr[min], &arr[head]);
		if (max == head)
		{
			max = min;
		}
		Swap(&arr[max], &arr[tail]);

		head++;
		tail--;
	}
}


void BubbleSort(int* arr, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void AdjustDown(int* arr, int n, int root)
{
	//������µ��������ڵ����ӽ����бȽϣ�����С���ӽ����н���
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] < arr[child + 1])
		{
			child++;
		}
		if (arr[parent] < arr[child])
		{
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

void HeapSort(int* arr, int n)
{
	//������˼�룺
	//�Ƚ���ѣ��Ѷ�Ԫ�ؾ�������������Ԫ��
	//�����Ѷ�Ԫ�غ����һ��Ԫ��
	//���µ�����һ�����

	int i = 0;
	//�����㷨
	for (i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
	
	//�������ҵ���
	for (i = 1; i < n; i++)
	{
		Swap(&arr[0], &arr[n - i]);
		AdjustDown(arr, n - i, 0);
	}
}

void Efficiency()
{
	int* arr1 = (int*)malloc(sizeof(int) * NUM);
	int* arr2 = (int*)malloc(sizeof(int) * NUM);
	int* arr3 = (int*)malloc(sizeof(int) * NUM);
	int* arr4 = (int*)malloc(sizeof(int) * NUM);
	int* arr5 = (int*)malloc(sizeof(int) * NUM);

	if (!arr1 && !arr2 && !arr3 && !arr4 && !arr5)
	{
		return;
	}
	int i = 0; 
	for (i = 0; i < NUM; i++)
	{
		arr1[i] = rand() + i;
		arr2[i] = arr1[i];
		arr3[i] = arr1[i];
		arr4[i] = arr1[i];
		arr5[i] = arr1[i];
	}
	int n1 = clock();
	InsertSort(arr1, NUM);
	int n2 = clock();
	
	int n3 = clock();
	ShellSort(arr2, NUM);
	int n4 = clock();

	int n5 = clock();
	SelectSort(arr3, NUM);
	int n6 = clock();
	
	int n7 = clock();
	BubbleSort(arr4, NUM);
	int n8 = clock();
	
	int n9 = clock();
	HeapSort(arr5, NUM);
	int n10 = clock();

	printf("InsertSort: %d\n", n2 - n1);
	printf("ShellSort: %d\n", n4 - n3);
	printf("SelectSort: %d\n", n6 - n5);
	printf("BubbleSort: %d\n", n8 - n7);
	printf("HeapSort: %d\n", n10 - n9);

}
