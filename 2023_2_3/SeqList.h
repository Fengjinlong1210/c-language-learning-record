#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DFLT_CAP 4
#define ADD_CAP 4

typedef int datatype;

typedef struct SeqList
{
	int sz;
	int capacity;
	datatype* data;
}SeqList;

//≥ı ºªØ
void InitSeqList(SeqList* ps);

void PushBack(SeqList* ps, datatype num);

void AddCapacity(SeqList* ps);

void PopBack(SeqList* ps);

void Destroy(SeqList* ps);

void Print(SeqList* ps);

void PushFront(SeqList* ps, datatype num);

void PopFront(SeqList* ps);

datatype SeqListFind(SeqList* ps, datatype num, int pos);

void PosInsert(SeqList* ps, int pos, datatype num);

void PosDelete(SeqList* ps, int pos);