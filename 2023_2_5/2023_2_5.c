#define _CRT_SECURE_NO_WARNINGS 1

#include "SLlist.h"

//SLL* newlist = NULL;
//
//void Test1()
//{
//	SLLPushBack(&newlist, 1);
//	SLLPushBack(&newlist, 2);
//	SLLPushBack(&newlist, 3);
//	SLLPushBack(&newlist, 4);
//
//	Print(newlist);
//}
//
//int main()
//{
//	Test1();
//	//SLL* newlist = CreateSLlist(5);
//	//创造链表，接受返回的指针
//	//Print(newlist);
//	return 0;
//}

SLl* newlist = NULL;

//void Test1()
//{
//	SLlPushBack(&newlist, 1);
//	SLlPushBack(&newlist, 2);
//	SLlPushBack(&newlist, 3);
//	SLlPushBack(&newlist, 4);
//	SLlPushBack(&newlist, 5);
//	SLlPopBack(&newlist);
//
//	Print(newlist);
//	SLlPopBack(&newlist);
//	Print(newlist);
//
//	SLlPopBack(&newlist);
//	Print(newlist);
//
//	SLlPopBack(&newlist);
//	Print(newlist);
//
//
//}

void Test2()
{
	SLlPushFront(&newlist, 1);
	SLlPushFront(&newlist, 2);
	SLlPushFront(&newlist, 3);
	SLlPushFront(&newlist, 4);
	SLlPushFront(&newlist, 5);
	Print(newlist);

	SLlPopFront(&newlist);
	Print(newlist);
}

int main()
{
	Test2();
	return 0;
}