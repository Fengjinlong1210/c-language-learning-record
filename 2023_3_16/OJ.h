#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* ReverseList(ListNode* head);

ListNode* MiddleNode(ListNode* head);

bool palindromeList(ListNode* head);