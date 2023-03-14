#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>

//快速排序的三段递归
void QuickSort(int* arr, int begin, int end);

//单趟快排
int QuickSortPart1(int* arr, int begin, int end);

void QuickSort2(int* arr, int begin, int end);

void MergeSort(int* arr, int n);

void MergeSortNonR(int* arr, int n);