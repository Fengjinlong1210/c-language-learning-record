#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//char* s_gets(char* str, int num)
//{
//	char* start = str;
//	int i = 0;
//	fgets(str, num, stdin);
//	if (str)
//	{
//		while (str[i] != '\0' && str[i] != '\n')
//			i++;
//		//�ҵ����һ���ַ�
//		if (str[i] == '\n')
//		{
//			str[i] = '\0';//�滻'\n'
//		}
//		else
//		{
//			while (getchar() != '\n')//���������������ַ�
//				continue;
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	char arr[10] = { 0 };
//	char arr2[10] = { 0 };
//	//fgets(arr, 10, stdin);//����'\n'
//	////������볬�����ޣ��������һ���ַ����滻��'\0'
//	//printf("%s\n", arr);
//	
//	s_gets(arr, 10);
//	//�滻\n������������
//	scanf("%s", arr2);
//	printf("%s\n", arr);
//
//	return 0;
//}

//�ṹ��

//typedef struct peoinfo
//{
//	int age;
//	char name[20];
//}peoinfo;
//
//typedef struct contact
//{
//	int sz;
//	peoinfo* data;
//}contact;
//
//void init_stct(contact* p)
//{
//	char arr[10] = "abcdefg";
//	p->sz = 0;
//	p->data = (peoinfo*)malloc(sizeof(peoinfo) * 10);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->data[i].age = i;
//		strcpy(p->data[i].name, arr);//�ṹ�帳ֵ
//	}
//}
//
//int main()
//{
//	contact a;
//	init_stct(&a);
//	return 0;
//}