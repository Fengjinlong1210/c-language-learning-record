#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void CreateQueue(CQ* pq, int size)
{
	//Ԥ����һ���ռ�
	CQDatatype* tmp = (CQDatatype*)malloc(sizeof(CQDatatype) * (size + 1));
	if (!tmp)
	{
		perror("malloc");
		exit(-1);
	}
	pq->data = tmp;
	pq->capacity = size;
	pq->head = pq->tail = 0;

}

bool isEmpty(CQ* pq)
{
	assert(pq);
	return pq->head = pq->tail;
}

bool isFull(CQ* pq)
{
	assert(pq);
	return pq->head == (pq->tail + 1) % (pq->capacity + 1);
}



bool CQPush(CQ* pq, CQDatatype val)
{
	assert(pq);
	if (isFull(pq))
	{
		return false;
	}
	pq->data[pq->tail] = val;
	pq->tail++;
	pq->tail %= pq->capacity + 1;//���tail���±�Ϊ0��λ�ã�
	//if(tail == pq->capacity + 1)  tail = 0;
	return true;
}

bool CQPop(CQ* pq)
{
	assert(pq);
	if (isEmpty(pq))
	{
		return false;
	}
	pq->head++;
	pq->head %= pq->capacity + 1;
	return true;
}

CQDatatype TopOfCQ(CQ* pq)
{
	assert(pq);
	return pq->data[pq->head];
}

CQDatatype TailOfCQ(CQ* pq)
{
	assert(pq);
	return pq->data[pq->tail];
}

void CQDestroy(CQ* pq)
{
	free(pq->data);
	free(pq);
	pq = NULL;
}
