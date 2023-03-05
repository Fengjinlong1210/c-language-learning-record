#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100

void InsertSort(int* arr, int n);

void ShellSort(int* arr, int n);

void SelectSort(int* arr, int n);

void BubbleSort(int* arr, int n);

void AdjustDown(int* arr, int n, int root);
void HeapSort(int* arr, int n);

void Print(int* arr, int n);

void Efficiency();
