#define _CRT_SECURE_NO_WARNINGS 1
#include "Statement.h"

void InitStack(Stack* pst)
{
	assert(pst);
	DataType* tmp = (DataType*)malloc(sizeof(DataType) * DEFAULT_CAPACITY);
	if (!tmp)
	{
		perror("Stack malloc");
		exit(-1);
	}
	else
	{
		pst->data = tmp;
		pst->top = 0;
		pst->capacity = DEFAULT_CAPACITY;
	}
}

void CheckCapacity(Stack* pst)
{
	assert(pst);
	if (pst->top == pst->capacity)
	{
		DataType* tmp = (DataType*)realloc(pst->data, sizeof(DataType) * (pst->capacity + DEFAULT_CAPACITY));
		if (!tmp)
		{
			perror("realloc");
			exit(-1);
		}
		else
		{
			pst->data = tmp;
			pst->capacity = pst->capacity + DEFAULT_CAPACITY;
		}
	}
}

void StackPush(Stack* pst, DataType val)
{
	assert(pst);
	CheckCapacity(pst);

	pst->data[pst->top] = val;
	pst->top++;
}


void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->top != 0);
	pst->top--;
}

void PrintStack(Stack* pst)
{
	assert(pst);
	assert(pst->top != 0);
	int i = 0;
	for (i = 0; i < pst->top; i++)
	{
		printf("%d ", pst->data[i]);
	}
	printf("\n");
}

void PrintTop(Stack* pst)
{
	assert(pst);
	assert(pst->top != 0);
	printf("%d ", pst->data[pst->top - 1]);
}

int StackSize(Stack* pst)
{
	assert(pst);
	printf("Size of Stack is %d \n", pst->top);
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
	pst->capacity = 0;
	pst->top = 0;
}

DataType StackTop(Stack* pst)
{
	assert(pst);
	return pst->data[pst->top-1];
}