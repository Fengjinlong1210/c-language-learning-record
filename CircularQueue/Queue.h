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

//创建链表
void CreateQueue(CQ* pq, int size);

//插入数据
bool CQPush(CQ* pq, CQDatatype val);

//删除数据
bool CQPop(CQ* pq);

//队头数据
CQDatatype TopOfCQ(CQ* pq);

//队尾数据
CQDatatype TailOfCQ(CQ* pq);

//判空
bool isEmpty(CQ* pq);

//判满
bool isFull(CQ* pq);

//销毁
void CQDestroy(CQ* pq);