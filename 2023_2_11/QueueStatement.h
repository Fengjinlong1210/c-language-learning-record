#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//队列
typedef int QLDataType;

typedef struct QueueNode
{
	QLDataType val;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

typedef struct
{
	Queue q1;
	Queue q2;
} MyStack;

//初始化
void QueueInit(Queue* pq);

//新结点
QNode* BuyNode(val);

//入队  尾插
void QueuePush(Queue* pq, QLDataType val);

//出队	头删
void QueuePop(Queue* pq);

//返回头部元素
QLDataType QueueTop(Queue* pq);

//返回尾部元素
QLDataType QueueBack(Queue* pq);

//返回元素个数
int QueueSize(Queue* pq);

//判断是否为空
bool QueueEmpty(Queue* pq);

//销毁
void QueueDestroy(Queue* pq);

MyStack* myStackCreate();
void myStackPush(MyStack* obj, int x);
int myStackPop(MyStack* obj);
int myStackTop(MyStack* obj);
bool myStackEmpty(MyStack* obj);
void myStackFree(MyStack* obj);


