#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//-------------------------�����ַ����е���------------------------------
//char* reverse_str(char* start, char* end)
//{
//	char tmp = 0;
//	char* flag = start;
//	while (start < end)
//	{
//		tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//	return flag;
//}
//int main()
//{
//	char str[101] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	//printf("%s\n", reverse_str(str, str + len - 1));
//	
//	//���������ַ���
//	reverse_str(str, str + len - 1);
//
//	//����ÿ������
//	char* start = str;
//	char* end = str;
//	while (*start)
//	{
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end - 1);
//
//		if (end != '\0')
//		{
//			start = end + 1;
//			end++;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", str);
//	return 0;
//}

//��˴洢��С�˴洢
//��˴洢������λ�ֽڴ���ڵ͵�ַ��������λ�ֽڴ���ڸߵ�ַ��
//С�˴洢������λ�ֽڴ���ڸߵ�ַ��������λ�ֽڴ���ڸߵ�ַ��
//int main()
//{
//	int a = 0x12345678;
//	return 0;
//}

//--------------------------дһ�������жϴ�С�˴洢-----------------------------
//int judge()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//int main()
//{
//	int ret = judge();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d , b=%d , c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;//�ضϺ�洢����10000000
// 
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000����
//	printf("%u\n", a);
//	//�����޷������δ�ӡ
//	//�������������ձ���ԭ�������ͽ�������
//	// 
//	// �з�����ǰ�油����λ
//	// �޷�����ǰ�油0
//	// 
//	//2^32-127
//	return 0;
//}

//
//int main()
//{
//	char a = 128;
//	//10000000
//	printf("%u\n", a);
//	//11111111 11111111 11111111 10000000
//	//2^32-127
//
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010
//
//	printf("%d\n", i + j);
//	//11111111 11111111 11111111 11110110����
//	//10000000 00000000 00000000 00001010  =  -10
//
//	return 0;
//}

//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//n==0ʱ����-1�õ�11111111 11111111 11111111 11111111  42 9496 7295
//	return 0;
//}

//int main()
//{
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++)
//	//{
//	//	a[i] = -1 - i;
//	//	//-1 -2 -3 -4 -5 ... -128 127 126 125 ... 0
//	//}
//	//printf("%d", strlen(a));
//	char a = 127;
//	a = a + 1;
//	printf("%d\n", a );
//	return 0;
//}

//unsigned char i = 0;

//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world  %d\n",i);
//		
//	}
//	//i=255ʱ��11111111 + 1 = 100000000  ѭ����ͷ��ʼ
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//11111111  00110111
//	//11001000 
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	//1 00101100
//	//44
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//	//300 
//	return 0;
//}


//0x00001234