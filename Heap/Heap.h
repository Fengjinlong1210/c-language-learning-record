#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDatetype;

typedef struct Heap
{
	HPDatetype* data;
	int capacity;
	int size;
}HP;

//初始化
void HeapInit(HP* php);

//建堆
void HeapCreate(HP* php, HPDatetype* arr, int size);

//
void HPCheckCapacity(HP* php);

//插入
void HeapPush(HP* php, HPDatetype val);

//删除
void HeapPop(HP* php);

//向下调整:大堆
void AdjustDown(HPDatetype* arr, int size, int n);

//向上调整
void AdjustUp(HPDatetype* arr, int n);


//打印
void HeapPrint(HP* php);

//销毁
void HeapDestroy(HP* php);