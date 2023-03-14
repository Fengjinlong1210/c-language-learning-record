#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//归并排序
void MergeSort(int *arr, int n);
//单趟归并排序
void _mergesort(int *arr, int begin, int end, int *tmp);

//归并排序非递归
void MergeSortNonR(int *arr, int n);

//快速排序非递归，借助栈实现
void QuickSortNonR(int *arr, int begin, int end);

int QuickSortPart(int *arr, int begin, int end);
