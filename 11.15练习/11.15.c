#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* pa = &a;			//const���Ǻ���ߣ�ָ������õ�ֵ���ܸı䣨ǿ�������ã�
//								//�����Ըı�ָ���ָ��
//  *pa=20;//����
//	pa = &b;//��ȷ
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* const pa = &a;			//const���Ǻ��ұߣ�ָ���ָ���ܷ����ı䣨ǿ��ָ���ָ��
//								//�����Ըı�����õ�ֵ
//	//pa = &b;//����
//	*pa = 20;//��ȷ
//	return 0;
//}

//��ά����Ľ�����
//#define ROW 3
//#define LINE 4
//
//int main()
//{
//	int arr[ROW][LINE] = { {0,1,2,3},{5,4,5,6},{0,7,8,9} };
//	//��ʱarrΪ����ָ�룬Ҫ���arr[0][0]��ֵ��Ҫ��arr����������
//	// 
//	//printf("%d\n", *arr+1);
//	//arr=arr[0](arr[0]Ϊ����Ԫ�ص�����)
//	//arr+1��Ϊ��������int��С
//	//arr[0]+1��Ϊ����һ��int��С
//	
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);//������ROW��int����
//
//	//printf("%p\n", arr[0]);
//	//printf("%p\n", arr[0] + 1);//����һ��int����
//
//	//��ʱarrΪ����ָ�룬Ҫ���arr[0][0]��ֵ��Ҫ��arr����������
//	printf("%d\n", **arr);
//
//	printf("%d\n", *(*(arr + 1)+1));
//	return 0;
//}


//����ָ��Ͷ�ά����ı�ʾ						����δ���