#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct peoinfo
{
	char name[20];
	int age;
	char phnum[12];
}peoinfo;

typedef struct contacts
{
	int sz;
	peoinfo* data;
}contacts;

contacts con;

int main()
{
	strcpy((con.data->name), "fengjinlong");
	printf("%s\n", con.data->name);


	return 0;
}