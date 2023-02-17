#define _CRT_SECURE_NO_WARNINGS 1
#include "statement.h"

slist* plist = NULL;

int main()
{

	PushBack(&plist, 100);
	PushBack(&plist, 200);
	PushBack(&plist, 300);
	PushBack(&plist, 400);
	PushBack(&plist, 500);
	PushBack(&plist, 600);
	PopBack(&plist);
	Print(plist);
	return 0;
}