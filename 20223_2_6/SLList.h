#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct SLlist
{
	datatype data;
	struct SLlist* next;
}SLl;

//创建新节点
//SLl* CreateNode(datatype num);

//打印
//void Print(SLl* plist);

//尾插
void SLlPushBack(SLl** pphead, datatype num);

//尾删
void SLlPopBack(SLl** pphead);

//头插
void SLlPushFront(SLl** pphead, datatype num);

//头删
void SLlPopFront(SLl** pphead);

//查找
SLl* SLlFind(SLl* plist, datatype num);

//在pos后插入
void SLlInsertAfter(SLl* pos, datatype num);

//删除pos后
void SLlEraseAfter(SLl* pos);

//在pos前插入
void SLlInsertFront(SLl** pphead, SLl* pos, datatype num);

//删除pos位置
void SLlErasePos(SLl** pphead, SLl* pos);

struct ListNode* CreateNode(int num);

void Print(struct ListNode* plist);
