#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

inline void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Stack::Init(int capacity)
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