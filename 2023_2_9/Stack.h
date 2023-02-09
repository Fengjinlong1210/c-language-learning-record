#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DEFAULT_CAPACITY 4

typedef int DataType;

typedef struct Stack
{
	DataType* data;
	int top;
	int capacity;
}Stack;

//ջ���Ƚ������β��βɾ

//��ʼ��
void StackInit(Stack* pst);

//ѹջ
void StackPush(Stack* pst, DataType val);

//�������
void CheckCapacity(pst);

//��ջ
void StackPop(Stack* pst);

//��ȡջ������
DataType StackTopData(Stack* pst);

//��ȡԪ�ظ���
int StackNumber(Stack* pst);

//���ջ�Ƿ�Ϊ��
bool StackEmpty(Stack* pst);

//����
void StackDistroy(Stack* pst);