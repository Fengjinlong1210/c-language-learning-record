#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//������

//��������
//char short

//�߼���//�߼���
//int main()
//{
//	int a = 0, b = 1, c = 2, d = 3;
//	//
//	// int i = a++ && ++b && d++;
//	//�߼���һ�������㣬��ֹͣ����ļ���
//
//	int i = a++ || ++b || d++;
//	//�߼�������1��ֹͣ����ļ���
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

////--------------------------�±�����-----------------------------
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//arr[i] <==> *(arr+i) <==> *(i+arr) <==> i[arr]
//	printf("%d\n", arr[5]);
//	printf("%d\n", 5[arr]);
//	printf("%d\n", *(arr+5));
//	printf("%d\n", *(5+arr));
//	return 0;
//}

//------------------------�ṹ���Ա���ʲ�����-------------------------------
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct stu s = { "fengjinlong",21 };
//	struct stu* p = &s;
//	printf("name=%s age=%d\n", s.name, s.age);
//	printf("name=%s age=%d\n", p->name,p->age);
//
//	return 0;
//}

//----------------------------��������--------------------------
//���ʽ����һϵ�в��������������ɵ����У�һ�����ʽҲ����û�������
//��򵥵ı��ʽ����ֻ��һ�����������
//�ڱ��ʽ����ʱ����������ֽڴ�СС��int����������Ϊint���ͣ���CPU�н��м���

//�з��������ڽ�����������ʱ��ǰ�油����λ
//�޷������β�0
//int main()
//{
//	unsigned char a = 255;//-127
//	//00000000 00000000 00000000 11111111
//	//10000001
//	unsigned int b=0xFFFFFFFF;
//	//11111111 11111111 11111111 11111111����
//	char c = a + b;
//	unsigned char* pa = &a;
//	int* pb = &b;
//	printf("%u\n", *pa);
//	//00000000 00000000 00000000 11111111
//	//11111111 11111111 11111111 00000001����
//	//
//	printf("%u\n", *pb);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xff;
//	short b = 0xffff;
//	int c = 0xffffffff;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	if (a == 0xff)//��������������a=0xffffffff, a=-1
//	{
//		printf("%x\n", a);
//	}
//	
//	if (b == 0xffff)
//	{
//		printf("%x\n", b);
//	}	
//	
//	if (c == 0xffffffff)
//	{
//		printf("%x\n", c);
//	}
//	return 0;
//}

//int main()
//{
//	char c = 255;
//	//
//	//printf("%u\n", sizeof(c));
//	//printf("%u\n", sizeof(+c));//���ʽ��������
//	//printf("%u\n", sizeof(-c));
//	printf("%d\n", c);
//	return 0;
//}

//---------------------------��ӡ�����Ʋ���----------------------------
//void swap_binary(unsigned int n)
//{
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", (n & (1 << 31))>>31);
//		n <<= 1;
//	}
//}
//
//int main()
//{
//	int a = 20;//4,294,967,295
//	swap_binary(a);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6, c=6
//	b = ++c, c++, ++a, a++;// c=8  a=8  b=7
//	b += a++ + c;//b=b+7+8  a=9
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//----------------------ͳ�ƶ�������1�ĸ���---------------------------------
int main()
{
	int num = 0;
	int i = 0;
	while (scanf("%d", &num) != EOF)
	{
		int count = 0;

		for (i = 0; i < 32; i++)
		{
			if (num & (1 << i))
			{
				count++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}

//-------------------------��������������λ��ͬ�ĸ���------------------------------
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		int num = n ^ m;
//		int count = 0;
//		while (num)
//		{
//			if (num & 1)
//			{
//				count++;
//			}
//			num = num >> 1;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}