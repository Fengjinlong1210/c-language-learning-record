//#define _CRT_SECURE_NO_WARNINGS 1
//#include "SLList.h"
//
////SLl* CreateNode(datatype num)
////{
////	//�����ڴ�
////	SLl* newnode = (SLl*)malloc(sizeof(SLl));
////	if (!newnode)
////	{
////		perror("CreateNode");
////		exit(-1);
////	}
////	else
////	{
////		//��ʼ��
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
//	//�����½ڵ�
//	SLl* newnode = CreateNode(num);
//	//ָ��ԭ����ͷ
//	newnode->next = (*pphead);
//	(*pphead) = newnode;
//}
//
//void SLlPopFront(SLl** pphead)
//{
//	assert(*pphead);
//	//��¼ԭ��ͷ
//	SLl* orihead = (*pphead);
//	//�ƶ�ͷλ��
//	(*pphead) = (*pphead)->next;
//	//�ͷ�ԭ����ͷ
//	free(orihead);
//	orihead = NULL;
//}
//
//void SLlPushBack(SLl** pphead, datatype num)
//{
//	SLl* newnode = CreateNode(num);
//	//����û�нڵ������������ڵ㣬���ó�ͷ
//	if ((*pphead) == NULL)
//	{
//		(*pphead) = newnode;
//	}
//	//��ԭ����βָ���µ�β
//	else
//	{
//		SLl* cur = (*pphead);
//		//��β
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
//			//��β
//
//			cur = cur->next;
//			if (cur->next != NULL)
//			{
//				per = per->next;
//			}
//		}
//		//ǰһ��next��ΪNULL
//		per->next = NULL;
//		//��һ���ͷ�
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
//		//�½ڵ�ָ���һ���ڵ�
//		newnode->next = nextnode;
//		//posָ���½ڵ�
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
//		//�ҵ��������ڵ�
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
//		//�ҵ�posǰһ��λ��
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		//��¼posλ��
//		cur = pos;
//		//���������ڵ�
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
//		//��posǰһ��
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		prev->next = nextnode;
//		free(pos);
//	}
//}