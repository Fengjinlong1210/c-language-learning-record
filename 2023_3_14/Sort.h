#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>

//������������εݹ�
void QuickSort(int* arr, int begin, int end);

//���˿���
int QuickSortPart1(int* arr, int begin, int end);

void QuickSort2(int* arr, int begin, int end);

void MergeSort(int* arr, int n);

void MergeSortNonR(int* arr, int n);