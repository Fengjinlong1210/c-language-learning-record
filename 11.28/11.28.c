#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//------------------------------------------����ָ��-------------------------------------------------
//����ָ�����ʽ  ����ֵ���� ��*ָ���������������ͣ�
//����  int (*p)(int,double);
//���������Ǻ�����ַ
//����ָ��<==>������<==>*����ָ��(�����÷��ű�����)
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*padd)(int, int) = Add;
//  int (*padd)(int, int) = &Add;
// 
//	int ret = padd(20, 30);
//	printf("%d\n", ret);
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	printf("%p\n", padd);//���ߴ�ӡ�ĵ�ַ��ȫ��ͬ
//
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", padd(2, 3));
//	printf("%d\n", (*padd)(2, 3));
//	printf("%d\n", (**padd)(2, 3));
//	printf("%d\n", (************************padd)(2, 3));//�����ͬ
//	//˵��*�����÷����ں���ָ���п���ʡ��
//	return 0;
//}

//----------------------------------------����ָ������---------------------------------------------------
//����ָ����������  �������� (*p[])(�������͡�������������);
//���� int (*p[])(int ,int );
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int main()
//{
//	int (*parr[])(int, int) = { add,sub,mul };
//	int ret = parr[0](1, 2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//---------------------------------------------�������----------------------------------------------
//(*(void (*)())0)()
//��0ָ��ǿ������ת���ɺ���ָ�룬����ָ�뷵������Ϊvoid���޲���
//Ȼ���ת�����0ָ����н�����

//void (* signal(int ,void (*)(int )))(int)
//void (*                            )(int)
//signal(int ,void(*)(int )) 
//signal ��һ�����������������Ǻ���ָ�룬������int �� ��һ������ָ��
//signal ǰ���*˵��signal�ķ���ֵ�����Ǻ���ָ��

//����typedef����δ���
//typedef void(*pfun_t)(int)
//pfun_t (signal(int ,pfun_t))

//-----------------------------------���ú���ָ�����飨ת�Ʊ�---------------------------------------------

void menu()
{
	printf("****************************\n");
	printf("***** 1.add       2.sub ****\n");
	printf("***** 3.mul       4.div ****\n");
	printf("********  0.exit  **********\n");
	printf("\n");

}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	menu();

	int input = 0;
	int a = 0;
	int b = 0;
	int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
	printf("enter a number\n");
	scanf("%d", &input);

	do {
		if (input >= 1 && input <= 4)
		{

			printf("enter two number\n");
			scanf("%d %d", &a, &b);
			int ret = parr[input](a, b);
			printf("%d\n", ret);
		}
		else
		{
			printf("illegal input \n");
		}

	} while (input);



	return 0;
}
