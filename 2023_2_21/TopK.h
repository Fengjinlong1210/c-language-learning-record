#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

//顺序结构堆的实现
//创建一个结构体变量，动态开辟一块连续的内存空间
//在这个连续的空间上存放数据，用结构体里的size成员约束堆的访问权限

//创建堆需要改变结构体变量，传址调用
//传入要存入堆的数据，拷贝源数据到动态开辟的内存空间
//利用建堆算法把数据构建成大根/小根堆

typedef int datatype;

typedef struct heap
{
	datatype* data;
	int size;
	int capacity;
}heap;

//创建
void CreateHeap(heap* ph, datatype* arr, int n);

//销毁
void DistroyHeap(heap* ph);

//插入
void PushHeap(heap* ph, datatype val);
//插入数据，先检查结构体容量是否足够，如果不够需要realloc一块足够大的空间
//插入之后顺着父系向上调整

//删除
void PopHeap(heap* ph);
//删除堆顶元素，将堆顶元素与最后一个元素进行交换
//然后size--，控制访问权限
//再从堆顶开始向下调整

//向上调整
void AdjustUp(datatype* arr, int pos);
//根据所给子树位置向上比较，交换父子顺序

//向下调整
void AdjustDownMax(datatype* arr, int n, int pos);
//向下调整为大堆，如果父结点小于最大的子节点，交换

void AdjustDownMin(datatype* arr, int n, int pos);


void Swap(int* p1, int* p2);

void Print(heap* ph);

void CheckCapacity(heap* ph);

void TopK(datatype* arr, int n, int k);
//

void HeapSort(heap* ph);
//先构建成堆，然后交换堆顶和堆尾，对堆尾以上的元素重新调整
//每次减少一个访问权限