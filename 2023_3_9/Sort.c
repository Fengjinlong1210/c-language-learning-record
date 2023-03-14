#include "Sort.h"

void Swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void QuickSort1(int *arr, int begin, int end)
{
    if (begin >= end - 1)
    {
        return;
    }
    int left = begin;
    int right = end - 1;
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
    QuickSort1(arr, begin, key);
    QuickSort1(arr, key + 1, end);
}

void QuickSort2(int *arr, int begin, int end)
{
    // 挖坑法
    if (begin >= end - 1)
    {
        return;
    }
    int left = begin;
    int right = end - 1;
    int key = arr[left];
    int hole = left;
    while (left < right)
    {
        while (right > left && arr[right] >= key)
        {
            right--;
        }
        arr[hole] = arr[right];
        hole = right;
        while (left < right && arr[left] <= key)
        {
            left++;
        }
        arr[hole] = arr[left];
        hole = left;
    }
    arr[hole] = key;
    QuickSort2(arr, begin, hole);
    QuickSort2(arr, hole + 1, end);
}

void QuickSort3(int *arr, int begin, int end)
{
    if (begin >= end - 1)
    {
        return;
    }
    int prev = begin;
    int cur = begin + 1;
    int key = begin;
    while (cur < end)
    {
        if (arr[cur] < arr[key] && ++prev != cur)
        {
            Swap(&arr[prev], &arr[cur]);
        }
        cur++;
    }
    Swap(&arr[prev], &arr[key]);
    key = prev;
    QuickSort3(arr, begin, key);
    QuickSort3(arr, key + 1, end);
}
