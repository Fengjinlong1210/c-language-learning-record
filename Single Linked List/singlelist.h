#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SingleListNode
{
	SLDataType val;
	struct SingleListNode* next;
}SLNode;

//带头单链表初始化头结点
SLNode* SLInitHead();

//新建结点
SLNode* SLBuyNode(SLDataType val);

//单链表的头插
void SLPushHead(SLNode* phead, SLDataType val);

//尾插
void SLPushBack(SLNode* phead, SLDataType val);

//头删
void SLPopHead(SLNode* phead);

//尾删
void SLPopBack(SLNode* phead);

//查找
SLNode* SLFindNode(SLNode* phead, SLDataType val);

//pos插入
void SLInsertBack(SLNode* phead, SLNode* pos, SLDataType val);

//pos删除
void SLDelete(SLNode* phead, SLNode* pos);

//销毁
void SLDistroy(SLNode* phead);

//打印
void SLPrint(SLNode* phead);
