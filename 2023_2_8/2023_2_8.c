#define _CRT_SECURE_NO_WARNINGS 1
#include "DLlist.h"

int main()
{
	ListNode* phead = InitNode();
	//InsertNode(phead, 10);
	//InsertNode(phead, 20);
	//InsertNode(phead, 30);
	//ListNode* ret = FindNode(phead, 20);
	//InsertNode(ret, 100);

	//PrintList(phead);
	//ListNode* ret = FindNode(phead, 20);
	//PrintNode(ret);

	PushBack(phead, 10);
	PushBack(phead, 20);
	PushBack(phead, 30);
	PushBack(phead, 40);
	PrintList(phead);
	PopBack(phead);
	PrintList(phead);
	PopBack(phead);
	PrintList(phead);

	PopBack(phead);
	PrintList(phead);

	PushFront(phead, 100);
	PushFront(phead, 200);
	PushFront(phead, 300);
	PushFront(phead, 400);
	PrintList(phead);

	PopFront(phead);
	PrintList(phead);

	PopFront(phead);
	PrintList(phead);
	PopFront(phead);
	PrintList(phead);
	PopFront(phead);

	ListDistroy(phead);
	phead = NULL;
	PrintList(phead);
	return 0;
}


//------------------------LeetCode 138.-------------------------------
struct Node* copyRandomList(struct Node* head)
{
    //1.插入新结点
    struct Node* cur = head;
    while (cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        struct Node* curnext = cur->next;
        copy->val = cur->val;
        cur->next = copy;
        copy->next = curnext;

        cur = curnext;
    }
    //2.链接random
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* curnext = cur->next->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }

        cur = curnext;
    }
    //3.把新链表截下来
    cur = head;
    struct Node* newhead = NULL;
    struct Node* newtail = NULL;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* curnext = cur->next->next;
        cur->next = curnext;
        if (newhead == NULL)
        {
            newhead = newtail = copy;
        }
        else
        {
            newtail->next = copy;
            newtail = newtail->next;
        }
        cur = curnext;
    }
    return newhead;
}