#include "Sort.h"
#include "Stack.h"

void Swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void MergeSort(int *arr, int n)
{
    int *tmp = (int *)malloc(sizeof(int) * n);
    if (!tmp)
    {
        perror("malloc");
        return;
    }
    _mergesort(arr, 0, n - 1, tmp);
    free(tmp);
    tmp = NULL;
}

void _mergesort(int *arr, int begin, int end, int *tmp)
{
    if (begin >= end)
    {
        return;
    }
    int mid = (begin + end) / 2;
    _mergesort(arr, begin, mid, tmp);
    _mergesort(arr, mid + 1, end, tmp);

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

// 非递归
void MergeSortNonR(int *arr, int n)
{
    int *tmp = (int *)malloc(sizeof(int) * n);
    if (!tmp)
    {
        perror("malloc");
        return;
    }

    int rangeN = 1;
    while (rangeN < n)
    {
        int i = 0;
        for (i = 1; i <= n; i += rangeN * 2)
        {
            int begin1 = i;
            int end1 = i + rangeN - 1;
            int begin2 = i + rangeN;
            int end2 = i + 2 * rangeN;
            int j = i;
            if (end1 >= n) // 右区间不存在
            {
                // 前一个区间的末尾越界，直接跳出即可
                // 包含begin2越界
                break;
            }
            else if (end2 >= n)
            {
                // 右区间存在但越界，只需把区间右界修改
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
            // 每次归并完拷贝到原数组
            memcpy(arr + i, tmp + i, sizeof(int) * (end2 - i + 1));
        }
        rangeN *= 2;
    }
}

void QuickSortNonR(int *arr, int begin, int end)
{
    stack pst;
    InitStack(&pst);
    StackPush(&pst, begin);
    StackPush(&pst, end - 1);

    while (!StackEmpty(&pst))
    {
        int right = TopOfStack(&pst);
        StackPop(&pst);
        int left = TopOfStack(&pst);
        StackPop(&pst);

        int key = QuickSortPart(arr, left, right);

        if(key + 1 < right)
        {
            StackPush(&pst, key + 1);
            StackPush(&pst, right);
        }
        if(left < key - 1)
        {
            StackPush(&pst, left);
            StackPush(&pst, key - 1);
        }
    }
    DistroyStack(&pst);
}

int QuickSortPart(int *arr, int begin, int end)
{
    int left = begin;
    int right = end;
    int key = begin;
    while (left < right)
    {
        while (right > left && arr[right] >= arr[key])
        {
            right--;
        }
        while (left < right && arr[left] <= arr[key])
        {
            left++;
        }
        Swap(&arr[left], &arr[right]);
    }
    Swap(&arr[left], &arr[key]);
    key = left;

    return key;
}
