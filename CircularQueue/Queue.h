#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int CQDatatype;

typedef struct CircularQueue
{
	int capacity;
	int head;
	int tail;
	CQDatatype* data;
}CQ;

//��������
void CreateQueue(CQ* pq, int size);

//��������
bool CQPush(CQ* pq, CQDatatype val);

//ɾ������
bool CQPop(CQ* pq);

//��ͷ����
CQDatatype TopOfCQ(CQ* pq);

//��β����
CQDatatype TailOfCQ(CQ* pq);

//�п�
bool isEmpty(CQ* pq);

//����
bool isFull(CQ* pq);

//����
void CQDestroy(CQ* pq);