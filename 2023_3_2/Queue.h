#pragma once
#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef BTNode* QLDatatype;
//ʵ�ֲ�������ĺ���
//�ı���е��������ͣ�Ҫ��Ŷ������Ľ��

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
QNode* QBuyNode(QLDatatype val);

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
