#define _CRT_SECURE_NO_WARNINGS 1
#include "SLlist.h"

//SLL* CreateNode(datatype num)
//{
//	//�����½ڵ�
//	SLL* newnode = (SLL*)malloc(sizeof(SLL));
//	if (!newnode)
//	{
//		perror("CreateNode: malloc");
//		exit(-1);
//	}
//	else
//	{
//		//���ٳɹ���ֵ
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
//	SLL* newnode = NULL;//�����´����Ľڵ�
//	for (i = 0; i < size; i++)
//	{
//		newnode = CreateNode(i);//�����½ڵ�
//		if (phead == NULL)//�������δ����
//		{
//			ptail = phead = newnode;//��ͷβ����
//		}
//		else
//		{
//			//�����Ѵ���
//			ptail->next = newnode;//ָ����ָ���½ڵ�
//			ptail = newnode;//Ų��β��ָ��
//		}
//	}
//	return phead;
//	//����һ��ָ�������ײ���ָ��
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
//	//�¿��ٿ���һ��ռ�
//	SLL* tail = *plist;
//	SLL* tmp = CreateNode(num);
//	if (*plist == NULL)
//	{
//		*plist = tmp;
//	}
//	else
//	{
//		//�ҵ�β��
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		//���ӽڵ�
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
	SLl* tail = *pphead;//��¼β��
	//�����½ڵ�
	SLl* newnode = CreateNode(num);
	//�ж��Ƿ�����׽ڵ�
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β�ڵ�
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
//	//���ֻ��һ���ڵ�
//	if ((cur->next) == NULL)
//	{
//		free(cur);
//		cur = NULL;
//	}
//	else
//	{
//		//˫ָ��
//		while (cur->next)
//		{
//			//����ѭ�������һ���ڵ��next��ΪNULL
//			cur = cur->next;//ָ����һ���ڵ�
//			if (cur->next!=NULL)//�����һ���ڵ�ΪNULL��preֹͣ�ƶ�
//			{
//				pre = pre->next;//preͣ���ڵ����ڶ����ڵ�
//			}
//		}
//		//�ڶ����ڵ�ָ��NULL'
//		pre->next = NULL;
//		free(cur);//�ͷ����һ���ڵ�
//		cur = NULL;
//	}
//}

void SLlPopBack(SLl** pphead)
{
	assert(*pphead && pphead);
	SLl* pre = *pphead;
	SLl* cur = *pphead;
	//���ֻ��һ���ڵ�
	if ((cur->next) == NULL)
	{
		free(cur);
		cur = NULL;
	}
	else
	{
		//˫ָ��
		while (cur->next->next)
		{
			cur = cur->next;
		}
		//�ڶ����ڵ�ָ��NULL'
		cur->next = NULL;
		free(cur->next);//�ͷ����һ���ڵ�
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
	//�����½ڵ�
	SLl* newnode = CreateNode(num);
	//���½ڵ�ָ��ԭ���Ľڵ�
	newnode->next = *pphead;
	//���½ڵ�����Ϊͷ�ڵ�
	*pphead = newnode;
}

void SLlPopFront(SLl** pphead)
{
	//�ݴ�ڶ����ڵ�
	SLl* TS = (*pphead)->next;
	//�ͷŵ�һ��
	free(*pphead);
	//��ͷ�ڵ㸳ֵΪ�ݴ�Ľڵ�
	*pphead = TS;
}