#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//����
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

//��ʼ��
void QueueInit(Queue* pq);

//�½��
QNode* BuyNode(val);

//���  β��
void QueuePush(Queue* pq, QLDataType val);

//����	ͷɾ
void QueuePop(Queue* pq);

//����ͷ��Ԫ��
QLDataType QueueTop(Queue* pq);

//����β��Ԫ��
QLDataType QueueBack(Queue* pq);

//����Ԫ�ظ���
int QueueSize(Queue* pq);

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);

//����
void QueueDestroy(Queue* pq);

MyStack* myStackCreate();
void myStackPush(MyStack* obj, int x);
int myStackPop(MyStack* obj);
int myStackTop(MyStack* obj);
bool myStackEmpty(MyStack* obj);
void myStackFree(MyStack* obj);


