#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	fgets(arr, 10, stdin);//fgets��洢���з�
//	//while (arr[i] != '\n')
//	//	i++;
//	//arr[i] = '\0';
//	//fputs(arr, stdout);
//	printf("%s", arr);
//	return 0;
//}

//�ṹ�崫��

//s_gets����  ����fgetsʵ��
//����fgets�Ļ��з���������ջ�����

//char* s_gets(char* str, int num)
//{
//	char* start = str;
//	int i = 0;
//	fgets(str, num, stdin);
//	while (*str)
//	{
//		if (*str == '\n')
//			*str = '\0';
//		str++;
//	}
//}

int main()
{
	char arr[10] = { 0 };
	char arr2[10] = { 0 };
	fgets(arr, 10, stdin);
	scanf("%s", arr2);
	printf("%s", arr);
	printf("%s", arr2);

	return 0;
}