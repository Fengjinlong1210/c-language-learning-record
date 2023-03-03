#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//带头双向循环链表
typedef int DLDataType;

typedef struct DLNode
{
	DLDataType val;
	struct DouobleListNode* next;
	struct DouobleListNode* prev;
}DLNode;

//初始化并创建头结点
DLNode* DLInitHead();

//创建新结点
DLNode* DLBuyNode(DLDataType val);

//头插
void DLPushHead(DLNode* phead, DLDataType val);

//头删
void DLPopHead(DLNode* phead);

//尾插
void DLPushBack(DLNode* phead, DLDataType val);

//尾删
void DLPopBack(DLNode* phead);

//查找
DLNode* DLFindNode(DLNode* phead, DLDataType val);

//pos插入
void DLInsertBack(DLNode* phead, DLNode* pos, DLDataType val);

//pos删除
void DLDeletePos(DLNode* phead, DLNode* pos);

//销毁/
void DLDistroy(DLNode* phead);

//打印
void DLPrint(DLNode* phead);
