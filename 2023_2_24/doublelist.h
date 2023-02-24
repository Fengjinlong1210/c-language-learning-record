#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

//带头双向循环链表
//建立一个头结点，用这个头结点指向下一个结点和前一个结点
//需要对头结点进行初始化，使头结点的next和prev都指向自己

typedef int datatype;

typedef struct DLlist
{
	datatype val;
	struct DLlist* next;
	struct DLlist* prev;
}ListNode;

//初始化头结点
ListNode* InitHead();

//创建新结点
ListNode* DLlCreateNode(datatype val);

//打印
void DLlPrint(ListNode* phead);

//头插
void DLlPushFront(ListNode* phead, datatype val);

//头删
void DLlPopFront(ListNode* phead);

//尾插
void DLlPushBack(ListNode* phead, datatype val);

//尾删
void DLlPopBack(ListNode* phead);

//查找
ListNode* FindNode(ListNode* phead, ListNode* pos, datatype val);

//销毁
void DLlDistroy(ListNode* phead);

//删除pos位置
void DelPos(ListNode* pos);

//pos后插入
void InsertNode(ListNode* pos, datatype val);
