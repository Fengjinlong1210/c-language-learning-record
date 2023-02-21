#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

//˳��ṹ�ѵ�ʵ��
//����һ���ṹ���������̬����һ���������ڴ�ռ�
//����������Ŀռ��ϴ�����ݣ��ýṹ�����size��ԱԼ���ѵķ���Ȩ��

//��������Ҫ�ı�ṹ���������ַ����
//����Ҫ����ѵ����ݣ�����Դ���ݵ���̬���ٵ��ڴ�ռ�
//���ý����㷨�����ݹ����ɴ��/С����

typedef int datatype;

typedef struct heap
{
	datatype* data;
	int size;
	int capacity;
}heap;

//����
void CreateHeap(heap* ph, datatype* arr, int n);

//����
void DistroyHeap(heap* ph);

//����
void PushHeap(heap* ph, datatype val);
//�������ݣ��ȼ��ṹ�������Ƿ��㹻�����������Ҫreallocһ���㹻��Ŀռ�
//����֮��˳�Ÿ�ϵ���ϵ���

//ɾ��
void PopHeap(heap* ph);
//ɾ���Ѷ�Ԫ�أ����Ѷ�Ԫ�������һ��Ԫ�ؽ��н���
//Ȼ��size--�����Ʒ���Ȩ��
//�ٴӶѶ���ʼ���µ���

//���ϵ���
void AdjustUp(datatype* arr, int pos);
//������������λ�����ϱȽϣ���������˳��

//���µ���
void AdjustDownMax(datatype* arr, int n, int pos);
//���µ���Ϊ��ѣ���������С�������ӽڵ㣬����

void AdjustDownMin(datatype* arr, int n, int pos);


void Swap(int* p1, int* p2);

void Print(heap* ph);

void CheckCapacity(heap* ph);

void TopK(datatype* arr, int n, int k);
//

void HeapSort(heap* ph);
//�ȹ����ɶѣ�Ȼ�󽻻��Ѷ��Ͷ�β���Զ�β���ϵ�Ԫ�����µ���
//ÿ�μ���һ������Ȩ��