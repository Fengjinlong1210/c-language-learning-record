#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
/*
int main()
{
	Date d1;
	Date d2;
	d1.Init(2022, 1, 2);
	d2.Init(2023, 3, 28);

	d1.Print();
	d2.Print();

	d1.TestThisptr();
	d2.TestThisptr();
	return 0;
}
*/


/*

thisָ��
c++����ĳ�Ա�����У�������һ�����ص�ָ�룬����ָ����������
����������ɱ������Զ���ɵ�

this�����������Ա������һ�������βΣ���ջ�д�ţ�vs�üĴ���

*/

//int main()
//{
//	test* pt = nullptr;
//	pt->Print();//��ʹ�ǿ�ָ��Ҳ���Ե��ú���
//	pt->PrintMember();//�����Կ�ָ����н�����
//	return 0;
//}

int main()
{
	Stack st1;
	st1.Init(8);
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);
	st1.Push(4);
	st1.Push(5);
	st1.Push(6);
	st1.Push(7);
	st1.Push(8);
	st1.Push(9);
	st1.Pop();
	st1.Pop();
	st1.Pop();
	st1.Pop();
	int ret = st1.TopOfStack();
	cout << ret << endl;
	return 0;
}