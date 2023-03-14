#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

int GetMid(int* arr, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (arr[begin] > arr[end])
	{
		if (arr[mid] < arr[end])
		{
			return end;
		}
		else  //arr[mid] > arr[end]
		{
			return arr[mid] < arr[begin] ? mid : begin;
		}
	}
	else    //arr[begin] <= arr[end]
	{
		if (arr[mid] < arr[begin])
		{
			return begin;
		}
		else  //arr[mid]>arr[begin]
		{
			return arr[mid] > arr[end] ? end : mid;
		}
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	int left = begin;
	int right = end;

	int key = QuickSortPart1(arr, begin, end);

	QuickSort(arr, begin, key - 1);
	QuickSort(arr, key + 1, end);
}

int QuickSortPart1(int* arr, int begin, int end)
{
	int mid = GetMid(arr, begin, end);//三数取中
	Swap(&arr[begin], &arr[mid]);

	int left = begin;
	int right = end;
	int key = left;


	while (left < right)
	{
		//right找小的
		while (right > left && arr[key] <= arr[right])
		{
			right--;
		}
		//left找大
		while (left < right && arr[key] >= arr[left])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;

	return key;
}

void QuickSort2(int* arr, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int mid = GetMid(arr, begin, end);//三数取中
	Swap(&arr[begin], &arr[mid]);

	int left = begin;
	int right = end;
	int cur = left + 1;
	int key = arr[left];
	//不能写成key = left，在后续排序过程中，arr[key]的值会不断改变

	while (cur <= right)
	{
		if (arr[cur] < key)
		{
			Swap(&arr[cur], &arr[left]);
			cur++;
			left++;
		}
		else if(arr[cur] > key)
		{
			Swap(&arr[cur], &arr[right]);
			right--;
		}
		else//arr[cur] = arr[key]
		{
			cur++;
		}
	}
	//[begin, left - 1],[left, right],[right + 1, end]
	QuickSort2(arr, begin, left - 1);
	QuickSort2(arr, right + 1, end);
}

void _MergeSort(int* arr, int begin, int end, int* tmp)
{
	if (begin >= end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	_MergeSort(arr, begin, mid, tmp);
	_MergeSort(arr, mid + 1, end, tmp);

	int begin1 = begin;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] <= arr[begin2])
		{
			tmp[i++] = arr[begin1++];
		}
		else
		{
			tmp[i++] = arr[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = arr[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = arr[begin2++];
	}

	memcpy(arr + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}


void MergeSort(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}

	_MergeSort(arr, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}


void MergeSortNonR(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (!tmp)
	{
		perror("malloc");
		return;
	}

	int gap = 1;
	int i = 0;
	while (gap < n)
	{
		for (i = 0; i < n; i += gap * 2)
		{
			//第一轮归并，把每个数都视为有序数组，两两进行归并
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + gap * 2 - 1;
			
			int j = i;//j用来控制tmp数组的下标，

			//调整区间
			if (end1 >= n)
			{
				//前一个区间部分越界
				break;
			}

			else if (end2 >= n)
			{
				//修正第二个区间长度
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] <= arr[begin2])
				{
					tmp[j++] = arr[begin1++];
				}
				else
				{
					tmp[j++] = arr[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = arr[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = arr[begin2++];
			}
			memcpy(arr + i, tmp + i, sizeof(int) * (gap * 2));
		}
		gap *= 2;
	}

	free(tmp);
	tmp = NULL;
}