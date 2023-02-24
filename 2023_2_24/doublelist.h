#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

//��ͷ˫��ѭ������
//����һ��ͷ��㣬�����ͷ���ָ����һ������ǰһ�����
//��Ҫ��ͷ�����г�ʼ����ʹͷ����next��prev��ָ���Լ�

typedef int datatype;

typedef struct DLlist
{
	datatype val;
	struct DLlist* next;
	struct DLlist* prev;
}ListNode;

//��ʼ��ͷ���
ListNode* InitHead();

//�����½��
ListNode* DLlCreateNode(datatype val);

//��ӡ
void DLlPrint(ListNode* phead);

//ͷ��
void DLlPushFront(ListNode* phead, datatype val);

//ͷɾ
void DLlPopFront(ListNode* phead);

//β��
void DLlPushBack(ListNode* phead, datatype val);

//βɾ
void DLlPopBack(ListNode* phead);

//����
ListNode* FindNode(ListNode* phead, ListNode* pos, datatype val);

//����
void DLlDistroy(ListNode* phead);

//ɾ��posλ��
void DelPos(ListNode* pos);

//pos�����
void InsertNode(ListNode* pos, datatype val);
