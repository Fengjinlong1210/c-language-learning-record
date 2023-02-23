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

//�������ʵ��
//���ýṹ��ָ��ָ���һ����㣬���ݽṹ��ָ��ĵ�ַ

//�½����
SLl* CreateNode(datatype val);

//��ӡ
void Print(SLl** pphead);

//β��
void PushBack(SLl** pphead, datatype val);

//βɾ
void PopBack(SLl** pphead);

//ͷ��
void PushFront(SLl** pphead, datatype val);

//ͷɾ
void PopFront(SLl** pphead);

//����
SLl* FindData(SLl** pphead, SLl* pos, datatype val);

//pos�����

//pos֮ǰ����

//ɾ��pos

//����