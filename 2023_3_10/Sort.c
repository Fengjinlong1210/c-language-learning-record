#include "Sort.h"

void _MergeSort(int *arr, int begin, int end, int *tmp)
{
    if (begin >= end)
    {
        return;
    }
    int mid = (end + begin) / 2;
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

void MergeSort(int *arr, int n)
{
    // 先开辟一段空间
    int *tmp = (int *)malloc(sizeof(int) * n);
    if (!tmp)
    {
        exit(-1);
    }

    _MergeSort(arr, 0, n - 1, tmp);

    free(tmp);
    tmp = NULL;
}