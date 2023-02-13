#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//ѭ�����У�˳���ʵ��
typedef int DataType;

typedef struct CirculationQueue
{
	DataType* data;
	int head;
	int tail;
	int k;	//���г���
}CQ;

//�������
CQ* QueueCreate(int k);

//���
bool enQueue(CQ* obj, DataType val);

//����
bool deQueue(CQ* obj);

//��ͷ����
DataType QueueFront(CQ* obj);

//��β����
DataType QueueBack(CQ* obj);

//�п�
bool QueueEmpty(CQ* obj);

//����
bool QueueFull(CQ* obj);

void QueueFree(CQ* obj);