#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

typedef struct heap
{
	int* data;
	int size;
	int capacity;
}heap;

//������
void CreateHeap(heap* ph, int* arr, int n);

//����
void DistroyHeap(heap* ph);

//����
void PushHeap(heap* ph, int val);

//ɾ��
void PopHeap(heap* ph);

//���ϵ���
void AdjustUp(heap* ph);

//���µ���
void AdjustDown(int* arr, int n, int pos);

//����
void Swap(int* p1, int* p2);

void Print(heap* ph);

//ɾ���Ѷ�����
void DeleteFront(int* arr, int pos);

//��Ԫ�ظ���
int SizeofHeap(heap* ph);

//�п�
bool HeapEmpty(heap* ph);

//������
void HeapSort(heap* ph);

