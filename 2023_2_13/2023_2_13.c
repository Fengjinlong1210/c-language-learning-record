#define _CRT_SECURE_NO_WARNINGS 1
#include "Statement.h"

int main()
{
	CQ* newcq = QueueCreate(3);
	enQueue(newcq, 1);
	enQueue(newcq, 2);
	enQueue(newcq, 3);
	enQueue(newcq, 4);

	return 0;
}