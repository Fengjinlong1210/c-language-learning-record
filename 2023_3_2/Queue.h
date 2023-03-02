#pragma once
#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef BTNode* QLDatatype;
//实现层序遍历的核心
//改变队列的数据类型，要存放二叉树的结点

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

//队列：先进先出
//初始化
void InitQueue(Qptr* pq);

//创建结点
QNode* QBuyNode(QLDatatype val);

//入队
void QueuePush(Qptr* pq, QLDatatype val);

//出队
void QueuePop(Qptr* pq);

//获取头元素
QLDatatype QueueFront(Qptr* pq);

//获取尾元素
QLDatatype QueueBack(Qptr* pq);

//获取元素个数
int QueueSize(Qptr* pq);

//判断是否为空
bool QueueEmpty(Qptr* pq);

//销毁
void QueueDestroy(Qptr* pq);
