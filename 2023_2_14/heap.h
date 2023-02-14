#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;

typedef struct heap
{
	HPDataType* data;
	int size;
	int capacity;

}heap;

//��ʼ����
void HeapInit(heap* php);

//��������
void HeapPush(heap* php, HPDataType val);

//���ٶ�