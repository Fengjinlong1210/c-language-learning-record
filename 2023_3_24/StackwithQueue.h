#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

typedef struct QNode
{
	QDataType val;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

typedef struct Stack
{
	Queue q1;
	Queue q2;
}MyStack;

//初始化
void QueueInit(Queue* pq);

//创建新结点
QNode* QBuyNode(QDataType val);

//入队
void enQueue(Queue* pq, QDataType val);

//出队
void deQueue(Queue* pq);

//判空
bool isEmpty(Queue* pq);

//打印
void QPrint(Queue* pq);

//销毁
void QDistroy(Queue* pq);

//返回队列长度
int QueueLenth(Queue* pq);

//返回头部元素
QDataType TopOfQueue(Queue* pq);

//返回尾部元素
QDataType TailOfQueue(Queue* pq);

//
MyStack* myStackCreate();

void myStackPush(MyStack* obj, int x);

int myStackPop(MyStack* obj);

int myStackTop(MyStack* obj);

int myStackEmpty(MyStack* obj);

void myStackFree(MyStack* obj);
