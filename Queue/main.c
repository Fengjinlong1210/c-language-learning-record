#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

Queue QL;

int main()
{
	QueueInit(&QL);
	enQueue(&QL, 1);
	enQueue(&QL, 2);
	enQueue(&QL, 3);
	enQueue(&QL, 4);
	enQueue(&QL, 5);
	enQueue(&QL, 6);
	enQueue(&QL, 7);
	QPrint(&QL);
	deQueue(&QL);
	QPrint(&QL);
	int ret = QueueLenth(&QL);
	printf("%d \n", ret);
	int ret1 = TopOfQueue(&QL);
	int ret2 = TailOfQueue(&QL);
	printf("%d \n", ret1);
	printf("%d \n", ret2);

	QDistroy(&QL); 


	return 0;
}