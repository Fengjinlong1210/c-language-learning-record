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

//现有一链表的头指针 ListNode* pHead，给一定值x，
//编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
SLNode* Partition(SLNode* phead, int x);
