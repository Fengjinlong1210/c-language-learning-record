#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ö������
//ֻ��ʹ��ö�����͸�ö�ٱ�����ֵ
//typedef enum SEX
//{
//	MALE = 1,//��ö�ٱ�������ֵ�������ֵÿ�ε���1
//	FEMALE,
//}sex;
//
//int main()
//{
//	printf("%d\n", sizeof(sex));
//	return  0;
//}

//��������
//�����������ͬһ��ռ�
//union test
//{
//	char ch;	
//	int a;
//};
//
//union test un;//��������
//
//int main()
//{
//	printf("%p\n", &(un.a));
//	printf("%p\n", &(un.ch));
//	un.a = 0x11223344;
//	un.ch = 0x55;
//	printf("%x\n", un.ch);
//	return 0;
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


//��̬�ڴ����
//malloc
// void* malloc(size_t num)
// �����ڴ�ռ䣬���ֽ�Ϊ��λ

//calloc
// void* calloc(size_t num, size_t size)	������ÿ����С

//free
// �ͷŷ�����ڴ�
// �ͷź���Ҫ�ֶ���Ϊ��ָ��

//realloc
// void* realloc(void* ptr, size_t num)
//�޸��Ѿ���������ڴ�ռ�
// ���ԭ�����ڴ�ռ䲻�������µĴ�С������������Ѱ��һ���㹻��Ŀռ�
// ���ҷ����µĵ�ַ

//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(40);//����һ��40�ֽڵ��ڴ�ռ�
//	if (NULL != p)//����ɹ�����ʹ��
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//��ֵ���ã������޸�str��ֵ
//	printf(str);
//	//δ�ͷ��ڴ�ռ�
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��ȷ��
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//��ַ���ã��޸�str��ֵ
//	printf(str);
//	//�ͷ��ڴ�ռ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��̬�ڴ���亯��ʹ��ע������
//1.���ܶԿ�ָ����н����ã������ڴ�ռ��Ҫ�ж�ָ���Ƿ�Ϊ��

//2.���ܶ�����Ŀռ�Խ����ʣ�ֻ�ܷ������벿�ֵĿռ�

//3.ʹ�ú�Ҫ��ʱ�ͷſռ䣬���������ڴ�й©

//4.�����ͷ�δ������ڴ�ռ䣨�Ƕ�̬�ڴ濪�ٵĿռ䣩

//5.�����ͷ�һ��������Ŀռ�

//6.��ͬһ��ռ����ͷ�

//����İ���
// 
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//�������ڽ���
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//δ�ͷ�
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//�ͷź���ʹ��ԭ���ĵ�ַ
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}