#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef int datatype;

typedef struct heap
{
	datatype* data;
	int size;
	int capacity;
}heap;

void CreateHeap(heap* ph, datatype* arr, int n);

void AdjustDownMin(datatype* arr, int n, int pos);
void AdjustDownMax(datatype* arr, int n, int pos);


void Swap(int* p1, int* p2);

void Print(heap* ph);

datatype* TopK(datatype* arr, int n, int k);
