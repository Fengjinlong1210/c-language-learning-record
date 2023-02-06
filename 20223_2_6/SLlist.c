//#define _CRT_SECURE_NO_WARNINGS 1
//#include "SLList.h"
//
////SLl* CreateNode(datatype num)
////{
////	//开辟内存
////	SLl* newnode = (SLl*)malloc(sizeof(SLl));
////	if (!newnode)
////	{
////		perror("CreateNode");
////		exit(-1);
////	}
////	else
////	{
////		//初始化
////		newnode->data = num;
////		newnode->next = NULL;
////		return newnode;
////	}
////}
//
////void Print(SLl* plist)
////{
////	assert(plist);
////	SLl* cur = plist;
////	while (cur)
////	{
////		printf("%d ", cur->data);
////		cur = cur->next;
////	}
////	printf("\n");
////}
//
//void SLlPushFront(SLl** pphead, datatype num)
//{
//	//创建新节点
//	SLl* newnode = CreateNode(num);
//	//指向原本的头
//	newnode->next = (*pphead);
//	(*pphead) = newnode;
//}
//
//void SLlPopFront(SLl** pphead)
//{
//	assert(*pphead);
//	//记录原本头
//	SLl* orihead = (*pphead);
//	//移动头位置
//	(*pphead) = (*pphead)->next;
//	//释放原本的头
//	free(orihead);
//	orihead = NULL;
//}
//
//void SLlPushBack(SLl** pphead, datatype num)
//{
//	SLl* newnode = CreateNode(num);
//	//处理没有节点的情况：创建节点，设置成头
//	if ((*pphead) == NULL)
//	{
//		(*pphead) = newnode;
//	}
//	//用原本的尾指向新的尾
//	else
//	{
//		SLl* cur = (*pphead);
//		//找尾
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//	}
//}
//
//void SLlPopBack(SLl** pphead)
//{
//	assert((*pphead));
//	SLl* cur = (*pphead);
//	SLl* per = (*pphead);
//	if (cur->next == NULL)
//	{
//		free(cur);
//		cur = NULL;
//	}
//	else
//	{
//		while (cur->next)//
//		{
//			//找尾
//
//			cur = cur->next;
//			if (cur->next != NULL)
//			{
//				per = per->next;
//			}
//		}
//		//前一个next置为NULL
//		per->next = NULL;
//		//后一个释放
//		free(cur);
//	}
//}
//
//SLl* SLlFind(SLl* plist, datatype num)
//{
//	assert(plist);
//	SLl* pos = plist;
//	while (pos)
//	{
//		if (pos->data == num)
//		{
//			return pos;
//		}
//		pos = pos->next;
//	}
//	return NULL;
//}
//
//void SLlInsertAfter(SLl* pos, datatype num)
//{
//	assert(pos);
//	SLl* newnode = CreateNode(num);
//	if (pos->next == NULL)
//	{
//		pos->next = newnode;
//	}
//	else
//	{
//		SLl* nextnode = pos->next;
//		//新节点指向后一个节点
//		newnode->next = nextnode;
//		//pos指向新节点
//		pos->next = newnode;
//	}
//}
//
//void SLlEraseAfter(SLl* pos)
//{
//	assert(pos);
//	if (pos->next == NULL)
//	{
//		printf("NULL");
//		return;
//	}
//	else
//	{
//		SLl* nextnode = pos->next;
//		//找到后两个节点
//		SLl* nextnextnode = pos->next->next;
//		pos->next = nextnextnode;
//		free(nextnextnode);
//	}
//}
//
//void SLlInsertFront(SLl** pphead, SLl* pos, datatype num)
//{
//	assert(pos);
//	assert(pphead);
//	SLl* newnode = CreateNode(num);
//	if (pos == *pphead)
//	{
//		newnode->next = *pphead;
//		*pphead = newnode;
//	}
//	else
//	{
//		SLl* prev = *pphead;
//		SLl* cur = *pphead;
//		//找到pos前一个位置
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		//记录pos位置
//		cur = pos;
//		//链接三个节点
//		prev->next = newnode;
//		newnode->next = cur;
//	}
//}
//
//void SLlErasePos(SLl** pphead, SLl* pos)
//{
//	assert(pos);
//	if ((*pphead)->next == NULL)
//	{
//		free(pos);
//		*pphead = NULL;
//	}
//	else
//	{
//		SLl* prev = *pphead;
//		SLl* nextnode = pos->next;
//		//找pos前一个
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		prev->next = nextnode;
//		free(pos);
//	}
//}