#define _CRT_SECURE_NO_WARNINGS 1
#include "SLlist.h"

//SLL* CreateNode(datatype num)
//{
//	//创建新节点
//	SLL* newnode = (SLL*)malloc(sizeof(SLL));
//	if (!newnode)
//	{
//		perror("CreateNode: malloc");
//		exit(-1);
//	}
//	else
//	{
//		//开辟成功赋值
//		newnode->data = num;
//		newnode->next = NULL;
//		return newnode;
//	}
//}
//
//SLL* CreateSLlist(int size)
//{
//	int i = 0;
//	SLL* phead = NULL;
//	SLL* ptail = NULL;
//	SLL* newnode = NULL;//接受新创建的节点
//	for (i = 0; i < size; i++)
//	{
//		newnode = CreateNode(i);//接受新节点
//		if (phead == NULL)//如果链表未创建
//		{
//			ptail = phead = newnode;//用头尾接受
//		}
//		else
//		{
//			//链表已创建
//			ptail->next = newnode;//指针域指向新节点
//			ptail = newnode;//挪动尾部指针
//		}
//	}
//	return phead;
//	//返回一个指向链表首部的指针
//}
//
//void Print(SLL* list)
//{
//	assert(list);
//	SLL* cur = list;
//	while (1)
//	{
//		printf("%d ", cur->data);
//		if (!cur->next)
//		{
//			return;
//		}
//		cur = cur->next;
//	}
//}
//
//void SLLPushBack(SLL** plist, datatype num)
//{
//	//新开辟开辟一块空间
//	SLL* tail = *plist;
//	SLL* tmp = CreateNode(num);
//	if (*plist == NULL)
//	{
//		*plist = tmp;
//	}
//	else
//	{
//		//找到尾部
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		//链接节点
//		tail->next = tmp;
//	}
//}

SLl* CreateNode(datatype num)
{
	SLl* newnode = (SLl*)malloc(sizeof(SLl));
	if (!newnode)
	{
		perror("CreateNode: malloc");
		exit(-1);
	}
	else
	{
		newnode->data = num;
		newnode->next = NULL;
		return newnode;
	}
}

void SLlPushBack(SLl** pphead, datatype num)
{
	SLl* tail = *pphead;//记录尾部
	//开辟新节点
	SLl* newnode = CreateNode(num);
	//判断是否存在首节点
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾节点
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//void SLlPopBack(SLl** pphead)
//{
//	assert(*pphead && pphead);
//	SLl* pre = *pphead;
//	SLl* cur = *pphead;
//	//如果只有一个节点
//	if ((cur->next) == NULL)
//	{
//		free(cur);
//		cur = NULL;
//	}
//	else
//	{
//		//双指针
//		while (cur->next)
//		{
//			//进入循环代表第一个节点的next不为NULL
//			cur = cur->next;//指向下一个节点
//			if (cur->next!=NULL)//如果下一个节点为NULL，pre停止移动
//			{
//				pre = pre->next;//pre停留在倒数第二个节点
//			}
//		}
//		//第二个节点指向NULL'
//		pre->next = NULL;
//		free(cur);//释放最后一个节点
//		cur = NULL;
//	}
//}

void SLlPopBack(SLl** pphead)
{
	assert(*pphead && pphead);
	SLl* pre = *pphead;
	SLl* cur = *pphead;
	//如果只有一个节点
	if ((cur->next) == NULL)
	{
		free(cur);
		cur = NULL;
	}
	else
	{
		//双指针
		while (cur->next->next)
		{
			cur = cur->next;
		}
		//第二个节点指向NULL'
		cur->next = NULL;
		free(cur->next);//释放最后一个节点
		cur->next = NULL;
	}
}

void Print(SLl* list)
{
	assert(list);
	SLl* cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		if (!cur->next)
		{
			printf("\n");

			return;
		}
		cur = cur->next;
		
	}
}

void SLlPushFront(SLl** pphead, datatype num)
{
	//创建新节点
	SLl* newnode = CreateNode(num);
	//将新节点指向原本的节点
	newnode->next = *pphead;
	//把新节点设置为头节点
	*pphead = newnode;
}

void SLlPopFront(SLl** pphead)
{
	//暂存第二个节点
	SLl* TS = (*pphead)->next;
	//释放第一个
	free(*pphead);
	//给头节点赋值为暂存的节点
	*pphead = TS;
}