#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDataType;

typedef struct heap
{
	HPDataType* data;
	int size;
	int capacity;

}heap;

//��ʼ����
void HeapInit(heap* php);

//������
void HeapCreate(heap* php, HPDataType* arr, int n);


//��������
void HeapPush(heap* php, HPDataType val);

//ɾ������
void HeapPop(heap* php);

//��ӡ
void Print(heap* php);

void HeapExpand(heap* php);

void AdjustDown(HPDataType* arr, int size, int parent);


//���ٶ�