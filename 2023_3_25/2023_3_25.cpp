#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
��������
int main()
{
	const int a = 10;
	//int& b = a;  ����:Ȩ������
	const int& b = a;

	//int& c = 10;  //����c�ǳ���������Ȩ������
	const int& c = 10;


	return 0;
}
*/


//��������������
/*
void Swap(int& a, int& b)
{
	//�β���ʵ�ε�����
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 100;
	int b = 0;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
*/

//��������������ֵ :���˺���������󣬷��صĲ�����Ȼ���ڣ��ſ���ʹ�����÷���
/*
int& Func()
{
	static int n = 0;
	n++;
	return n;
}

int main()
{

	int i = 0; 
	for (i = 0; i < 10; i++)
	{
		int& a = Func();

		cout << "a = " << a << endl;
	}

	return 0;
}
*/

//�����úʹ�ֵ���õ�Ч�ʱȽ�

//��ֵ����ÿ�ζ�Ҫ����һ��ʵ�Σ�����Ч�ʽ�Ϊ����
/*
struct Arr
{
	int arr[10000];
};

void conveyReference(Arr& a)
{
	return;
}

void conveyValue(Arr a)
{
	return;
}

int main()
{
	Arr a;
	int i = 0;
	size_t t1 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyReference(a);
	}
	size_t t2 = clock();

	size_t t3 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyValue(a);
	}
	size_t t4 = clock();

	cout << "convey Reference:" << t2 - t1 << endl;

	cout << "convey Value:" << t4 - t3 << endl;

	return 0;
}
*/

//���������뷵��ֵ��Ч�ʶԱ�
//����ֵҲ��Ҫ��ʵ�ν�����ʱ������Ч�ʽϵ�

/*
struct Arr
{
	int arr[10000];
};

Arr& conveyReference(Arr& a)
{
	return a;
}

Arr conveyValue(Arr a)
{
	return a;
}

int main()
{
	Arr a;
	int i = 0;
	size_t t1 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyReference(a);
	}
	size_t t2 = clock();

	size_t t3 = clock();
	for (i = 0; i < 10000; i++)
	{
		conveyValue(a);
	}
	size_t t4 = clock();

	cout << "convey Reference:" << t2 - t1 << endl;

	cout << "convey Value:" << t4 - t3 << endl;

	return 0;
}
*/

//���ú�ָ�������

//���﷨�������������Ǳ����ı��������ӵײ�ʵ���ϣ�����Ҳ��ͨ��ָ����ʵ�ֵ�


int main()
{
	int a = 10;
	
	int& ra = a;
	ra = 20;

	int* pa = &a;
	*pa = 20;

	return 0;
}

//���ú�ָ�������
/*
1. ���ô��﷨����һ�������ı�����ָ��洢�����ĵ�ַ

2. ���òŴ���ʱ�����ʼ����ָ����Բ��ó�ʼ��

3. ���ò��ܸı�ָ��ָ����Ըı�ָ��(���ò�����Ϊ�գ�ָ�����Ϊ��)

4. sizeof(����)ָ�������õ����ʹ�С��sizeof(ָ��)ָ����ָ������Ĵ�С

5. ����++��ʾ���ô���ı������ӣ�ָ��++��ʾָ��ָ��ĵ�ַ����ƶ�һ����λ

6. ָ���ж༶ָ�룬����û�ж༶����

7. ָ����ʱ�����Ҫ���н����ã����÷��ʱ����ɱ���������

8. ���ñ�ָ����԰�ȫ

*/


//��������inline

//�������ڵ�����������ʱ���ڵ��õĵط�ֱ��չ�����������Ὺ�ٵ��ú�����ջ֡
//�ܹ���������Ч�ʣ�����ʹ��ִ�г���Ĵ�С���
//��������һ����Ժ�������inline��ͨ���Դ�������С�ĺ�������inline

//inline���������������Ͷ������