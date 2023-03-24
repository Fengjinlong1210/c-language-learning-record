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

//��ʼ��
void QueueInit(Queue* pq);

//�����½��
QNode* QBuyNode(QDataType val);

//���
void enQueue(Queue* pq, QDataType val);

//����
void deQueue(Queue* pq);

//�п�
bool isEmpty(Queue* pq);

//��ӡ
void QPrint(Queue* pq);

//����
void QDistroy(Queue* pq);

//���ض��г���
int QueueLenth(Queue* pq);

//����ͷ��Ԫ��
QDataType TopOfQueue(Queue* pq);

//����β��Ԫ��
QDataType TailOfQueue(Queue* pq);

//
MyStack* myStackCreate();

void myStackPush(MyStack* obj, int x);

int myStackPop(MyStack* obj);

int myStackTop(MyStack* obj);

int myStackEmpty(MyStack* obj);

void myStackFree(MyStack* obj);
