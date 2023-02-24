#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int datatype;

typedef struct SingleList
{
	datatype val;
	struct SingleList* next;
}SLl;

//单链表的实现
//利用结构体指针指向第一个结点，传递结构体指针的地址

//新建结点
SLl* CreateNode(datatype val);

//打印
void Print(SLl** pphead);

//尾插
void PushBack(SLl** pphead, datatype val);

//尾删
void PopBack(SLl** pphead);

//头插
void PushFront(SLl** pphead, datatype val);

//头删
void PopFront(SLl** pphead);

//查找
SLl* FindData(SLl** pphead, SLl* pos, datatype val);

//pos后插入
void PosInsert(SLl** pphead, SLl* pos, datatype val);

//pos之前插入
void PosInsertFront(SLl** pphead, SLl* pos, datatype val);

//删除pos
void DeletePos(SLl** pphead, SLl* pos);

//销毁
void Distroy(SLl** pphead);
