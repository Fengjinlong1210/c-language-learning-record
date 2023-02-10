#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QLDatatype;

typedef struct QueueNode
{
	QLDatatype val;
	struct QueueNode* next;
}QNode;

typedef struct QueuePointer
{
	QNode* head;
	QNode* tail;
	int size;
}Qptr;

//���У��Ƚ��ȳ�
//��ʼ��
void InitQueue(Qptr* pq);

//�������
QNode* BuyNode(QLDatatype val);

//���
void QueuePush(Qptr* pq, QLDatatype val);

//����
void QueuePop(Qptr* pq);

//��ȡͷԪ��
QLDatatype QueueFront(Qptr* pq);

//��ȡβԪ��
QLDatatype QueueBack(Qptr* pq);

//��ȡԪ�ظ���
int QueueSize(Qptr* pq);

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Qptr* pq);

//����
void QueueDestroy(Qptr* pq);