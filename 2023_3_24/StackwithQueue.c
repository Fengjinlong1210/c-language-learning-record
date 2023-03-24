#define _CRT_SECURE_NO_WARNINGS 1
#include "StackwithQueue.h"
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


MyStack* myStackCreate()
{
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&obj->q1);
	QueueInit(&obj->q2);
	return obj;
}

void myStackPush(MyStack* obj, int x)
{
	//往空队列中push
	if (obj->q1.size != 0)
	{
		enQueue(&obj->q1, x);
	}
	else
	{
		enQueue(&obj->q2, x);
	}
}


int myStackPop(MyStack* obj)
{
	//把非空队列的前n个元素全部push到空队列中，保留最后一个元素
	//pop最后一个元素并返回值
	if (obj->q1.size == 0)
	{
		while (obj->q2.size > 1)
		{
			//把q2里的元素移动到q1中
			int top = TopOfQueue(&obj->q2);
			enQueue(&obj->q1, top);
			deQueue(&obj->q2);
		}
		int ret = TopOfQueue(&obj->q2);
		deQueue(&obj->q2);
		return ret;
	}
	else//q2为空
	{
		while (obj->q1.size > 1)
		{
			//把q2里的元素移动到q1中
			int top = TopOfQueue(&obj->q1);
			enQueue(&obj->q2, top);
			deQueue(&obj->q1);
		}
		int ret = TopOfQueue(&obj->q1);
		deQueue(&obj->q1);
		return ret;
	}
}

int myStackTop(MyStack* obj)
{
	if (obj->q1.size == 0)
	{
		return TailOfQueue(&obj->q2);
	}

	else
	{
		return TailOfQueue(&obj->q1);
	}
}

int myStackEmpty(MyStack* obj)
{
	if (obj->q1.size == 0 && obj->q2.size == 0)
	{
		return 1;
	}
	return 0;
}

void myStackFree(MyStack* obj)
{
	QDistroy(&obj->q1);
	QDistroy(&obj->q2);
	obj = NULL;
}