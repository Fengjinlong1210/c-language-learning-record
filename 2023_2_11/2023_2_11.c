#define _CRT_SECURE_NO_WARNINGS 1
#include "StackStatement.h"
#include "QueueStatement.h"

void TestStack()
{
	Stack ST;
	InitStack(&ST);
	StackPush(&ST, 1);
	StackPush(&ST, 2);
	StackPush(&ST, 3);
	StackPush(&ST, 4);
	StackPush(&ST, 5);
	StackPop(&ST);
	STDataType ret = StackTop(&ST);
	StackDestroy(&ST);

}

void TestQueue()
{
	Queue QL;
	QueueInit(&QL);
	QueuePush(&QL, 1);
	QueuePush(&QL, 2);
	QueuePush(&QL, 3);
	QueuePush(&QL, 4);
	QueuePop(&QL);
	QueueDestroy(&QL);
}

void Test3()
{
	MyStack* obj = myStackCreate();
	myStackPush(obj, 1);
	int ret2 = myStackPop(obj);

	myStackPush(obj, 2);
	//myStackPush(obj, 3);
	//myStackPush(obj, 4);
	//myStackPush(obj, 5);

	int ret1 = myStackTop(obj);
	printf("%d %d\n", ret1, ret2);

}

int main()
{
	//TestStack();
	//TestQueue();
	Test3();
	return 0;
}