#define _CRT_SECURE_NO_WARNINGS 1
#include "SLList.h"

SLl* newlist = NULL;

//void Test1()
//{
//	//CreateNode(100);
//	//SLlPushFront(&newlist, 100);
//	//SLlPushFront(&newlist, 200);
//	//SLlPushFront(&newlist, 300);
//	//SLlPushFront(&newlist, 400);
//	//SLlPushFront(&newlist, 500);
//	//SLlPushFront(&newlist, 600);
//	//SLlPushFront(&newlist, 700);
//	//SLlPushFront(&newlist, 800);
//	//SLlPushFront(&newlist, 900);
//	//SLlPushFront(&newlist, 1000);
//	//Print(newlist);
//
//	//SLlPopBack(&newlist);
//	//SLlPopBack(&newlist);
//	//SLlPopBack(&newlist);
//	Print(newlist);
//}
//
//void Test2()
//{
//	SLlPushBack(&newlist, 100);
//	SLlPushBack(&newlist, 200);
//	Print(newlist);
//	SLlPopBack(&newlist);
//	Print(newlist);
//
//}
//
//void Test3()
//{
//	SLlPushBack(&newlist, 100);
//	SLlPushBack(&newlist, 200);
//	SLlPushBack(&newlist, 300);
//	SLl* ret = SLlFind(newlist, 200);
//	//printf("%p", ret);
//	//SLlInsertAfter(ret, 1000);
//	Print(newlist);
//	//SLlEraseAfter(ret);
//	//Print(newlist);
//	//SLlInsertFront(&newlist, ret, 123);
//	SLlErasePos(&newlist, ret);
//	Print(newlist);
//
//}

//int main()
//{
//	//Test1();
//	Test3();
//	return 0;
//}

struct ListNode 
{
    int val;
    struct ListNode* next;
};

struct ListNode* CreateNode(int num)
{
	//开辟内存
	struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (!newnode)
	{
		perror("CreateNode");
		exit(-1);
	}
	else
	{
		//初始化
		newnode->val = num;
		newnode->next = NULL;
		return newnode;
	}
}

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur = head;
//    struct ListNode* tail = NULL;
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    else
//    {
//		newhead = NULL;
//        while (cur)
//        {
//            if (cur->val == val)
//            {
//                cur = cur->next;
//            }
//            else
//            {
//                if (newhead == NULL)
//                {
//                    newhead = cur;
//                    tail = newhead;
//                }
//                else
//                {
//                    tail->next = cur;
//                    tail = cur;
//                }
//				cur = cur->next;
//            }
//        }
//    }
//    if (tail->next)
//    {
//        tail->next = NULL;
//    }
//    return head;
//}



struct ListNode* CreateSLlist(int arr[], int size)
{
	int i = 0;
	struct ListNode* phead = NULL;
	struct ListNode* ptail = NULL;
	struct ListNode* newnode = NULL;//接受新创建的节点
	for (i = 0; i < size; i++)
	{
		newnode = CreateNode(arr[i]);//接受新节点
		if (phead == NULL)//如果链表未创建
		{
			ptail = phead = newnode;//用头尾接受
		}
		else
		{
			//链表已创建
			ptail->next = newnode;//指针域指向新节点
			ptail = newnode;//挪动尾部指针
		}
	}
	return phead;
	//返回一个指向链表首部的指针
}

void Print(struct ListNode* plist)
{
	assert(plist);
	struct ListNode* cur = plist;
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* tail = guard;
	if (list1 == NULL)
	{
		return list2;
	}
	if (list2 == NULL)
	{
		return list1;
	}
	while (list1 && list2)
	{
		if (list1->val > list2->val)
		{
			tail->next = list2;
			tail = tail->next;
			list2 = list2->next;
		}
		else
		{
			tail->next = list1;
			tail = tail->next;
			list1 = list1->next;
		}

	}
	if (list1)
	{
		tail->next = list1;
		list1 = list1->next;
	}
	if (list2)
	{
		tail->next = list2;
		list2 = list2->next;
	}

	struct ListNode* tmp = guard->next;
	free(guard);
	return tmp;
}

int main()
{
	int arr1[] = { -9, 3};
	int arr2[] = { 5,7 };

	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);

	struct ListNode* list1 = CreateSLlist(arr1, sz1);
	struct ListNode* list2 = CreateSLlist(arr2, sz2);

	struct ListNode* ret = mergeTwoLists(list1, list2);
	Print(ret);
    return 0;
}