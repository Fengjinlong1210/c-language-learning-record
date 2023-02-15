#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDataType;

typedef struct heap
{
	HPDataType* data;
	int size;
	int capacity;

}heap;

//初始化堆
void HeapInit(heap* php);

//创建堆
void HeapCreate(heap* php, HPDataType* arr, int n);


//插入数据
void HeapPush(heap* php, HPDataType val);

//删除数据
void HeapPop(heap* php);

//打印
void Print(heap* php);

void HeapExpand(heap* php);

void AdjustDown(HPDataType* arr, int size, int parent);


//销毁堆