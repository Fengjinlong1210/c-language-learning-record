#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;

typedef struct heap
{
	HPDataType* data;
	int size;
	int capacity;

}heap;

//初始化堆
void HeapInit(heap* php);

//插入数据
void HeapPush(heap* php, HPDataType val);

//销毁堆