#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//循环队列：顺序表实现
typedef int DataType;

typedef struct CirculationQueue
{
	DataType* data;
	int head;
	int tail;
	int k;	//队列长度
}CQ;

//创造队列
CQ* QueueCreate(int k);

//入队
bool enQueue(CQ* obj, DataType val);

//出队
bool deQueue(CQ* obj);

//队头数据
DataType QueueFront(CQ* obj);

//队尾数据
DataType QueueBack(CQ* obj);

//判空
bool QueueEmpty(CQ* obj);

//判满
bool QueueFull(CQ* obj);

void QueueFree(CQ* obj);