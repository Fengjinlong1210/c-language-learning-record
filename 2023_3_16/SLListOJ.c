#define _CRT_SECURE_NO_WARNINGS 1
#include "OJ.h"

//反转单链表
ListNode* ReverseList(ListNode* head)
{
	ListNode* cur = head;
	ListNode* prev = NULL;
	ListNode* end = cur->next;
	while (cur)
	{
		cur->next = prev;

		prev = cur;
		cur = end;
		if (cur)
		{
			end = cur->next;
		}
	}

	return prev;
}

ListNode* MiddleNode(ListNode* head)
{
	ListNode* fast = head;
	ListNode* slow = head;
	//fast走两步，slow走一步
	//链表结点个数为奇数时，fast走到最后一个结点，此时fast->next == NULL
	//链表节点个数为偶数时，fast走到NULL

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;
}

bool palindromeList(ListNode* head)
{
	ListNode* cur = head;
	ListNode* mid = MiddleNode(head);
	mid = ReverseList(mid);

	while (mid && cur)
	{
		if (mid->val != cur->val)
		{
			return false;
		}
		mid = mid->next;
		cur = cur->next;
	}
	return true;
}
