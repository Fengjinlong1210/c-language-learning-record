#pragma once
#include <iostream>

inline void Swap(int& a, int& b);

class Stack
{
public:
	void Init(int capacity = 4);

	int* _data;
	int _capacity;
	int _top;
};