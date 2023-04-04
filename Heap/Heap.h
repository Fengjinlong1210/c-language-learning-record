#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDatetype;

typedef struct Heap
{
	HPDatetype* data;
	int capacity;
	int size;
}HP;

//��ʼ��
void HeapInit(HP* php);

//����
void HeapCreate(HP* php, HPDatetype* arr, int size);

//
void HPCheckCapacity(HP* php);

//����
void HeapPush(HP* php, HPDatetype val);

//ɾ��
void HeapPop(HP* php);

//���µ���:���
void AdjustDown(HPDatetype* arr, int size, int n);

//���ϵ���
void AdjustUp(HPDatetype* arr, int n);


//��ӡ
void HeapPrint(HP* php);

//����
void HeapDestroy(HP* php);