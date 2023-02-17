#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct slist
{
	datatype val;
	struct slist* next;
}slist;

void Initlist(slist** pphead);


//创建节点
slist* CreateNode(datatype value);

//查找
slist* Find(slist* pl, datatype value);

//打印
void Print(slist* pl);

//尾插
void PushBack(slist** pphead, datatype value);

//尾删
void PopBack(slist** pphead);

//头插
void PushFront(slist** pphead, datatype value);

//头删
void PopFront(slist** pphead);

//在pos后插入
void InsertBack(slist** pphead, slist* pos, datatype value);
