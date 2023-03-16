#define _CRT_SECURE_NO_WARNINGS 1
#include "OJ.h"

ListNode* createlist()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	if (!n1)
	{
		return NULL;
	}
	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
	if (!n2)
	{
		return NULL;
	}
	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
	if (!n3)
	{
		return NULL;
	}
	ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
	if (!n4)
	{
		return NULL;
	}

	n1->val = 1;
	n2->val = 5;
	n3->val = 6;
	n4->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	return n1;
}

int main()
{
	ListNode* head = createlist();
	int ret = palindromeList(head);
	printf("%d\n", ret);
	return 0;
}