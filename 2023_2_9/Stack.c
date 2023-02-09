#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void StackInit(Stack* pst)
{
	assert(pst);
	pst->capacity = DEFAULT_CAPACITY;
	pst->top = 0;
	pst->data = (DataType*)malloc(sizeof(DataType) * DEFAULT_CAPACITY);
}

void CheckCapacity(Stack* pst)
{
	assert(pst);
	if (pst->top == pst->capacity)
	{
		//����
		DataType* tmp = (DataType*)realloc(pst->data, sizeof(DataType)* (DEFAULT_CAPACITY * 2));
		if (!tmp)
		{
			perror("CheckCapacity realloc");
			exit(-1);
		}
		else
		{
			pst->data = tmp;
			pst->capacity = DEFAULT_CAPACITY * 2;
			printf("���ݳɹ�\n");
		}
	}
}

void StackPush(Stack* pst, DataType val)
{
	assert(pst);
	//����Ƿ���Ҫ����
	CheckCapacity(pst);

	pst->data[pst->top] = val;
	pst->top++;
}

void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->top != 0);
	pst->data[pst->top - 1] = 0;
	pst->top--;
}

DataType StackTopData(Stack* pst)
{
	assert(pst);
	assert(pst->top != 0);
	return pst->data[pst->top - 1];
}

int StackNumber(Stack* pst)
{
	assert(pst);
	return pst->top;
}

bool StackEmpty(Stack* pst)
{
	assert(pst);
	return (pst->top == 0);
}

void StackDistroy(Stack* pst)
{
	assert(pst);
	free(pst->data);
	pst->data = NULL;
	pst->capacity = DEFAULT_CAPACITY;
	pst->top = 0;
}