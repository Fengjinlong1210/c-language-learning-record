#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
using namespace std;

/*

inline ���������Ͷ��岻�ܱ��ֿ�����Ϊinline����������ŵ����ű���
�ᵼ������ʧ��

int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}

*/


/*
auto�ؼ��֣���������̫��ʱ������ʹ��auto�ؼ�������
ʹ��auto����ʱ������г�ʼ��������������޷��������



int main()
{
	int a = 10l;
	auto b = a;
	auto pa = &a;//��auto����ָ��ʱ�Ӳ���*û������
	//auto* paa = &a;
	auto& ra = a;
	//auto��������ʱ�����&

	cout << typeid(b).name() << endl;
	cout << typeid(pa).name() << endl;
	cout << typeid(ra).name() << endl;

	return 0;
}


auto��һ�������������ʱ�����������ͬ������

int main()
{
	auto a = 10, b = 20;
	auto c = 30, d = 41.5;//�ᱨ��
	return 0;
}


auto������Ϊ�����Ĳ�����void Test(auto a)
auto������������

struct BinaryTreeNode
{
	int val;
	struct BinaryTreeNode* next;
};

int main()
{
	BinaryTreeNode a;
	auto b = a;
	return 0;
}

*/

/*
���ڷ�Χ��forѭ��

ԭ����forѭ��
for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
{
	//statement
}

���ڷ�Χ��forѭ��
int array[] = {1,2,3,4,5,6,7,8,9};
for(auto X : array)
ð��ǰ��Ĳ��ֱ�ʾ���ڵ����ı�����ð�ź���Ĳ��ֱ�ʾ�����ķ�Χ

�����ķ�Χ������ȷ���ģ��ں�������Ϊ��Ԫ�ص�ַʱ���޷�ȷ�������ķ�Χ



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (auto a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
*/

/*
NULL������Ϊ
#define NULL 0
�ں������ص�����¿��ܻ����ƥ�����


void func(int)
{
	cout << "func(int)" << endl;
}

void func(int*)
{
	cout << "func(int*)" << endl;
}

int main()
{
	func(1);
	func(NULL);//��ƥ�䵽func(int*)
	return 0;
}
*/

/*
�������


struct Stack
{
	//c++�У�struct��Ҳ�ɶ��庯��
	void Init(int capacity = 4)
	{
		int* data = (int*)malloc(sizeof(int) * capacity);
		if (!data)
		{
			perror("malloc");
			return;
		}
		_capacity = capacity;
		_data = data;
		_top = 0;
	}

	int* _data;
	int _capacity;
	int _top;
};
*/
int main()
{
	Stack st;
	st.Init(4);
	return 0;
}