#define _CRT_SECURE_NO_WARNINGS 1
#include "Statement.h"

CQ* QueueCreate(int k)
{
	CQ* newCQ = (CQ*)malloc(sizeof(CQ));
	if (!newCQ)
	{
		perror("malloc");
		exit(-1);
	}
	DataType* tmp = (DataType*)malloc(sizeof(DataType) * (k + 1));
	if (!tmp)
	{
		perror("malloc");
		exit(-1);
	}
	newCQ->data = tmp;
	newCQ->head = newCQ->tail = 0;
	newCQ->k = k;
	return newCQ;
	
}

bool enQueue(CQ* obj, DataType val)
{
	if (QueueFull(obj))
	{
		return false;
	}
	obj->data[obj->tail++] = val;
	obj->tail %= (obj->k + 1);
	return true;
}

bool deQueue(CQ* obj)
{
	if (QueueEmpty(obj))
	{
		return false;
	}
	obj->head++;
	obj->head = (obj->head) % (obj->k + 1);
	return true;
}

DataType QueueFront(CQ* obj)
{
	return obj->data[obj->head];
}

DataType QueueBack(CQ* obj)
{
	return obj->data[obj->tail-1];
}


bool QueueEmpty(CQ* obj)
{
	assert(obj);
	return (obj->head == obj->tail);
}

bool QueueFull(CQ* obj)
{
	assert(obj);
	return (obj->head == (obj->tail + 1) % (obj->k + 1));
}

void QueueFree(CQ* obj)
{
	free(obj->data);
	free(obj);
	obj = NULL;
}