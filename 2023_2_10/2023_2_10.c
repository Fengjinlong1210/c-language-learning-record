#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

//bool isValid(char* s)
//{
//    Stack ST;
//    InitStack(&ST);
//    //���������ŷ���ջ�����������žʹ�ջ��ȡ��Ԫ�ضԱ�
//    //���ƥ������ַ���ָ������ƶ�
//    //��ƥ��ֱ�ӷ���false
//    while (*s)
//    {
//        if (*s == '(' || *s == '[' || *s == '{')
//        {
//            StackPush(&ST, *s);
//        }
//        else
//        {
//            if (StackEmpty(&ST))
//            {
//                StackDistroy(&ST);
//
//                return false;
//            }
//            char tmp = StackTop(&ST);
//            StackPop(&ST);
//            if ((tmp == '(' && *s != ')') ||
//                (tmp == '[' && *s != ']') ||
//                (tmp == '{' && *s != '}')
//                )
//            {
//                StackDistroy(&ST);
//                return false;
//            }
//        }
//        s++;
//    }
//    if (!StackEmpty(&ST))
//    {
//        StackDistroy(&ST);
//
//        return false;
//    }
//    StackDistroy(&ST);
//    return true;
//}
//int main()
//{
//
//    char arr[] = { "()" };
//    bool ret = isValid(arr);
//    if (ret)
//    {
//        printf("true");
//    }
//    else
//    {
//        printf("false");
//    }
//	return 0;
//}

int main()
{
	Qptr QL;
	InitQueue(&QL);
	QueuePush(&QL, 1);
	QueuePush(&QL, 2);
	QueuePush(&QL, 3);
	QueuePush(&QL, 4);
	QueuePush(&QL, 5);
	QueuePush(&QL, 6);
	QueuePush(&QL, 7);

	QueuePop(&QL);
	QLDatatype ret1 = QueueFront(&QL);
	printf("%d\n", ret1);
	QLDatatype ret2 = QueueBack(&QL);
	printf("%d\n", ret2);
	int ret3 = QueueSize(&QL);
	printf("%d\n", ret3);
	QueueDestroy(&QL);
	return  0;
}