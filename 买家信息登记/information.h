#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef struct peopleinfo
{
	char name[20];
	char address[60];
	char number[15];
	char goods[200];
}ppi;

typedef struct list
{
	ppi* data;
	int size;
	int capacity;
}list;

//≥ı ºªØ
void InitList(list* pl);

void Input(list* pl);

void CheckCapacity(list* pl);

void Delete(list* pl);

void Print(list* pl);

void Search(list* pl);

void Modify(list* pl);

int Find(list* pl, char* sname);