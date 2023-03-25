#define _CRT_SECURE_NO_WARNINGS 1
#include "QueuewithStack.h"

void StackInit(Stack* st)
{
	st->top = 0;
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * STDEFAULTSIZE);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	st->data = tmp;
	st->capacity = STDEFAULTSIZE;
}

void STCheckCapacity(Stack* st)
{
	if (st->capacity != st->top)
	{
		return;
	}
	STDataType* tmp = (STDataType*)realloc(st->data, sizeof(STDataType) * (st->capacity * 2));
	if (!tmp)
	{
		perror("realloc");
		return;
	}
	st->data = tmp;
	st->capacity *= 2;
}

void StackPush(Stack* st, STDataType val)
{
	assert(st);
	STCheckCapacity(st);
	st->data[st->top] = val;
	st->top++;
}

void StackPop(Stack* st)
{
	assert(st);
	//��
	if (isEmpty(st))
	{
		return;
	}
	st->top--;
}

bool isEmpty(Stack* st)
{
	assert(st);
	return st->top == 0;
}

bool isFull(Stack* st)
{
	assert(st);
	return (st->capacity == st->top);
}

void StackDistroy(Stack* st)
{
	assert(st);
	st->top = st->capacity = 0;
	free(st->data);
	st->data = NULL;
}

void StackPrint(Stack* st)
{
	assert(st);
	if (isEmpty(st))
	{
		return;
	}
	int i = 0;
	for (i = 0; i < st->top; i++)
	{
		printf("%d ", st->data[i]);
	}
	printf("\n");
}

STDataType TopOfStack(Stack* st)
{
	assert(st);
	return st->data[st->top - 1];
}



MyQueue* myQueueCreate()
{
	struct MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&obj->st1);
	StackInit(&obj->st2);
	return obj;
}

void myQueuePush(MyQueue* obj, int x)
{
	//ֻ��ջ1��push
	StackPush(&obj->st1, x);
}

int myQueuePop(MyQueue* obj)
{
	//��ջ2��pop
	//���ջ2Ϊ�գ��ʹ�ջ1��push����
	if (isEmpty(&obj->st2))
	{
		while (!isEmpty(&obj->st1))//��st1��Ϊ��ʱ
		{
			int tmp = TopOfStack(&obj->st1);
			StackPush(&obj->st2, tmp);
			StackPop(&obj->st1);
		}
	}
	//�Ѿ���st1���Ԫ��ת�Ƶ���st2��
	int ret = TopOfStack(&obj->st2);
	StackPop(&obj->st2);
	return ret;
}

int myQueuePeek(MyQueue* obj)
{
	//�������Ƚ���ջ��Ԫ��
	if (isEmpty(&obj->st2))
	{
		while (!isEmpty(&obj->st1))//��st1��Ϊ��ʱ
		{
			int tmp = TopOfStack(&obj->st1);
			StackPush(&obj->st2, tmp);
			StackPop(&obj->st1);
		}
	}
	int ret = TopOfStack(&obj->st2);
	return ret;
}

bool myQueueEmpty(MyQueue* obj)
{
	return (isEmpty(&obj->st1) && isEmpty(&obj->st2));
}

void myQueueFree(MyQueue* obj)
{
	StackDistroy(&obj->st1);
	StackDistroy(&obj->st2);
	free(obj);
	obj = NULL;
}