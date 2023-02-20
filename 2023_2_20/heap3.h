#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

typedef struct heap
{
	int* data;
	int size;
	int capacity;
}heap;

//创建堆
void CreateHeap(heap* ph, int* arr, int n);

//销毁
void DistroyHeap(heap* ph);

//插入
void PushHeap(heap* ph, int val);

//删除
void PopHeap(heap* ph);

//向上调整
void AdjustUp(heap* ph);

//向下调整
void AdjustDown(int* arr, int n, int pos);

//交换
void Swap(int* p1, int* p2);

void Print(heap* ph);

//删除堆顶数据
void DeleteFront(int* arr, int pos);

//堆元素个数
int SizeofHeap(heap* ph);

//判空
bool HeapEmpty(heap* ph);

//堆排序
void HeapSort(heap* ph);

