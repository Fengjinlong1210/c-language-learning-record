#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ָ��
//����ָ������
//ת�Ʊ�

//����ָ�룺ָ������ָ��
//int (*pf)(int ,int )
//ǰ����ָ��ָ�����ķ������ͣ�*��ʾpf��һ��ָ�룬(int ,int )��ʾ�����Ĳ���

//int Add(int x, int y)
//{
//	return x + y;
//}
//printf("Add = %p\n", Add);
//printf("&Add = %p\n", &Add);
//Add��&Add�ĵ�ַ��ȫ��ͬ
//���������Ǻ����ĵ�ַ

//int main()
//{
//	int a = 0, b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//
//	int (*pf)(int, int) = Add;
//	ret = pf(a, b);
//	//ret = (*pf)(a, b);
//	//ret = (*******pf)(a, b);
//	//ret = Add(a, b);
//	
//	//pf��һ������ָ�룬ָ��Add������pf����ֱ�ӵ���Add�������Ӳ��ӽ����÷��ŽԿ�
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//-------------------------����ָ������------------------------------
//int (*pfarr[])(int, char)
//pfarr�Ⱥ������ϣ�˵��pfarr��һ�����飬�����Ԫ�������Ǻ���ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div };
//	//pfarr��һ������ָ�����飬�����Ԫ�أ�ÿ��Ԫ���Ǻ���ָ������
//	//����ָ��ָ��ĺ���������������ÿ��������int���ͣ�����ֵҲ��int����
//	int ret = pfarr[1](1, 2);
//	//ͨ������Ԫ�ص��ú���
//	printf("%d\n", ret);
//	return 0;
//}

//--------------------------ת�Ʊ�ģ�������-----------------------------
//#include <stdlib.h>
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1. Add ****\n");
//	printf("**** 2. Sub ****\n");
//	printf("**** 3. Mul ****\n");
//	printf("**** 4. Div ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int a = 0, b = 0;
//	
//	int (*pfcacl[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		printf("��ѡ��\n");
//		menu();
//
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		if (input >= 1 && input <= 4)
//		{
//			system("cls");
//			printf("������������\n");
//			scanf("%d %d", &a, &b);
//			ret = pfcacl[input](a, b);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//	return 0;
//}

//�ϸ��ӵĺ���ָ��
//void (* (void (*)()) 0) ) (int)
//��0ǿ������ת���ɺ���ָ�룬void(*)()
//����0��ַ���ĺ���

//void ( *signal(int, void (*)(int) ) ) (int)
//signal��һ�������������Ĳ�����int����void(*)(int)�ĺ���ָ�룬�������ָ��Ĳ�����int������������void

//signal�ķ�������Ҳ��һ������ָ�룬�ú���ָ��Ĳ���Ҳ��int����������Ҳ��void

//typedef void(*pf)(int);
//void (*signal(int, void (*)(int))) (int)�Ϳ��Ը�д��
//pf signal(int , pf)

//------------------------ָ����ָ�������ָ��-------------------------------
//����һ������ָ������
//int (*pfarr[4])(int) = { NULL,NULL,NULL,NULL };
//
//int (*(*ppfarr)[4])(int) = pfarr;


//-----------------------�ص�����--------------------------------
//����ָ�뵱����һ�������Ĳ���  ������qsort����
//qsort(const void* base,  [Ŀ���������ʼ��ַ]
//		size_t num			[���鳤��]
//		size_t size			[����Ԫ�ش�С����λ���ֽ�]
//		int (*cmp)(const void*, const void*) );		[�Զ���ȽϺ���������ֵ���������]

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), my_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//---------------------------ģ��ʵ��qsort----------------------------
//int my_cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int compare(const void* e1, const void* e2)
//{
//	return (*(char*)e1 - *(char*)e2);
//}

//void swap(char* e1, char* e2, int width)//����char*ָ�뽻��ÿһ���ֽ�
//{
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < width; i++)
//	{
//		tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}

//void my_qsort(const void* base, size_t sz, size_t width, int(*compare)(void* e1, void* e2))
//{
//	size_t i = 0;
//	size_t j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//				//ǿ������ת��char* ֻ���ݵ�һ���ֽڵĵ�ַ
//			{
//				//����
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}

//int main()
//{
//	//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	char arr[10] = "gfesdafdb";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), compare);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//qsort����ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//};
//struct Stu a = { "zhangsan",20 };
//struct Stu b = { "lilaoba",50 };
//struct Stu c = { "abcde", 35 };
//
//int stc_cmp(const void* e1, const void* e2)//�ȽϽṹ���Ա
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//
//int main()
//{
//	struct Stu arr[3] = { a,b,c };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), stc_cmp);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i].name);
//	}
//	return 0;
//}

//-------------------------�������Ͼ���Ԫ��------------------------------
//int check(int arr[][5], int n, int* x, int* y)
//{
//	while (*x <= 4 && *y >= 0)
//	{
//		if (arr[*x][*y] < n)
//		{
//			(*x)++;
//		}
//		if (arr[*x][*y] > n)
//		{
//			(*y)--;
//		}
//		if (arr[*x][*y] == n)
//		{
//			return 1;
//			//printf("%d�У�%d��\n", x, y);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5] = {	
//		{1,2,3,4,5},
//		{2,3,4,5,6},
//		{3,4,5,6,7},
//		{4,5,6,7,8},
//		{5,6,7,8,9} 
//	};
//	int n = 0;
//	int x = 0;
//	int y = 4;
//	scanf("%d", &n);
//	int ret = check(arr, n, &x, &y);
//	if (1 == ret)
//	{
//		printf("%d�� %d��\n", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}

//------------------------�����ַ���-------------------------------
//abcdefg
void rotate_str(char* start, int lenth, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		char tmp = *start;
		for (j = 0; j < lenth - 1; j++)
		{
			*(start + j) = *(start + j + 1);
		}
		*(start + lenth - 1) = tmp;
	}
}

int main()
{
	char str[] = "abcdefg";
	int len = strlen(str);
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	rotate_str(str, len, n);
	printf("%s\n", str);
	return 0;
}