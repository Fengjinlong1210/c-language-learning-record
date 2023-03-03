#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//插入排序
void InsertSort(int* arr, int n);

//希尔排序
void ShellSort(int* arr, int n);

//选择排序
void SelectSort(int* arr, int n);

//效率检查
void Efficiency(int* arr, int N);