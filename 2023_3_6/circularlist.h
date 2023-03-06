#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int SLDataType;

typedef struct circularlist
{
	SLDataType val;
	struct circularlist* next;
}SLNode;

//带头单链表初始化头结点
SLNode* SLInitHead();

//新建结点
SLNode* SLBuyNode(SLDataType val);

//尾插
void SLPushBack(SLNode* phead, SLDataType val);

//pos删除
void SLDelete(SLNode* phead, SLNode* pos);

//销毁
void SLDistroy(SLNode* phead);

//打印
void SLPrint(SLNode* phead);

//链表元素个数
int SLSize(SLNode* phead);