#define _CRT_SECURE_NO_WARNINGS 1
#include "QueueStatement.h"

QNode* BuyNode(val)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (!newnode)
	{
		perror("BuyNode malloc");
		exit(-1);
	}
	else
	{
		newnode->next = NULL;
		newnode->val = val;
		return newnode;
	}
}


void QueueInit(Queue* pq)
{
	assert(pq);
	//QNode* newnode = BuyNode(val);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq, QLDataType val)
{
	assert(pq);
	QNode* newnode = BuyNode(val);
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
		pq->size++;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
		pq->size++;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	if (pq->head == pq->tail)
	{
		pq->tail = NULL;
		free(pq->head);
		pq->head = NULL;
	}
	else
	{
		QNode* tmp1 = pq->head;
		pq->head = pq->head->next;
		free(tmp1);
	}
	pq->size--;
}

QLDataType QueueTop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->val;
}

QLDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail);
	return pq->tail->val;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return (pq->size == 0);
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head=pq->tail=NULL;
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
    //先往一个空的队列中插入元素
    if (obj->q1.size != 0)
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj)
{
    //再把先进入的元素挪到另一个队列中，剩下的一个作为栈的元素
    if (obj->q1.size != 0)
    {
        //把q1的数据放到q2中，留下最后一个
        QNode* cur = obj->q1.head;
        while (cur->next)
        {
            //尾插q2
            QueuePush(&obj->q2, obj->q1.head->val);
            //头删q1
			QNode* curnext = cur->next;

            QueuePop(&obj->q1);
            cur = curnext;
        }
        int tmp = cur->val;
        QueuePop(&obj->q1);
        return tmp;
    }
    else
    {
        //把q1的数据放到q2中，留下最后一个
        QNode* cur = obj->q2.head;
        while (cur->next)
        {
            //尾插q2
            QueuePush(&obj->q1, obj->q2.head->val);
            //头删q1
			QNode* curnext = cur->next;
            QueuePop(&obj->q2);
            cur = curnext;
        }
        int tmp = cur->val;
        QueuePop(&obj->q2);
        return tmp;
    }
}

int myStackTop(MyStack* obj)
{
    if (obj->q1.size == 0)
    {
        return QueueBack(&obj->q2);
    }
    return QueueBack(&obj->q1);
}

bool myStackEmpty(MyStack* obj)
{
    return (QueueEmpty(&obj->q1)) && (QueueEmpty(&obj->q2));
}

void myStackFree(MyStack* obj)
{
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);

}