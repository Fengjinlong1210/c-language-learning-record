#define _CRT_SECURE_NO_WARNINGS 1
#include "OJ.h"

//��ת������
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
	//fast��������slow��һ��
	//���������Ϊ����ʱ��fast�ߵ����һ����㣬��ʱfast->next == NULL
	//����ڵ����Ϊż��ʱ��fast�ߵ�NULL

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
