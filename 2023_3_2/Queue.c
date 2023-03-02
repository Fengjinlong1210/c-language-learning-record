#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void InitQueue(Qptr* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	//pq->head->next = pq->tail->next = NULL;
	pq->size = 0;
}

QNode* QBuyNode(QLDatatype val)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (!newnode)
	{
		perror("BuyNode Malloc");
		exit(-1);
	}
	else
	{
		newnode->val = val;
		newnode->next = NULL;
		return newnode;
	}
}

void QueuePush(Qptr* pq, QLDatatype val)
{
	assert(pq);
	QNode* newnode = QBuyNode(val);
	if (pq->size == 0)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;
}

void QueuePop(Qptr* pq)
{
	assert(pq);
	assert(pq->size != 0);
	QNode* tmp = pq->head;
	pq->head = pq->head->next;
	free(tmp);
	pq->size--;
}

QLDatatype QueueFront(Qptr* pq)
{
	assert(pq);
	assert(pq->size != 0);
	return pq->head->val;
}

QLDatatype QueueBack(Qptr* pq)
{
	assert(pq);
	assert(pq->size != 0);
	return pq->tail->val;
}

int QueueSize(Qptr* pq)
{
	assert(pq);
	return pq->size;
}

bool QueueEmpty(Qptr* pq)
{
	assert(pq);
	return (pq->size == 0);
}

void QueueDestroy(Qptr* pq)
{
	assert(pq);
	int i = 0;

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* curnext = cur->next;
		free(cur);
		cur = curnext;
		pq->size--;
	}
	pq->head = pq->tail = NULL;
}