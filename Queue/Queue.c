#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

QNode* QBuyNode(QDataType val)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (!newnode)
	{
		perror("malloc newnode");
		return 0;
	}
	newnode->val = val;
	newnode->next = NULL;
	return newnode;
}

void enQueue(Queue* pq, QDataType val)
{
	assert(pq);
	QNode* newnode = QBuyNode(val);
	if (pq->size == 0)
	{
		pq->head = pq->tail = newnode;
		pq->size++;
		return;
	}

	pq->tail->next = newnode;
	pq->tail = newnode;
	pq->size++;
}

void deQueue(Queue* pq)
{
	assert(pq);
	if (isEmpty(pq))
	{
		printf("Queue is empty\n");
		return;
	}
	QNode* tmp = pq->head->next;
	free(pq->head);
	pq->head = tmp;
	pq->size--;
}

bool isEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

void QPrint(Queue* pq)
{
	assert(pq);
	int i = 0;
	QNode* cur = pq->head;
	for (i = 0; i < pq->size; i++)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

int QueueLenth(Queue* pq)
{
	assert(pq);
	return pq->size;
}

QDataType TopOfQueue(Queue* pq)
{
	assert(pq);
	return pq->head->val;
}

QDataType TailOfQueue(Queue* pq)
{
	assert(pq);
	return pq->tail->val;
}

void QDistroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* curnext = cur->next;
		free(cur);
		cur = curnext;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

