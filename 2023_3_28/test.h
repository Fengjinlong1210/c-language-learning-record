#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	void Init(int year, int month, int day);

	void Print();

	void TestThisptr();
private:
	int _year;
	int _month;
	int _day;
};

class test
{
public:
	void Print()
	{
		cout << "print test" << endl;
	}

	void PrintMember()
	{
		cout << _test << endl;
	}
private:
	int _test;
};

class Stack
{
public:
	//³õÊ¼»¯
	void Init(int capacity = 4);

	//ÈëÕ»
	void Push(int val);

	//³öÕ»
	void Pop();

	//Õ»¶¥
	int TopOfStack();

	//ÅÐ¿Õ
	bool isEmpty();

	//Ïú»Ù
	void Destroy();

	//À©ÈÝ
	void Expand();


private:
	int* _data;
	int _top;
	int _capacity;
};