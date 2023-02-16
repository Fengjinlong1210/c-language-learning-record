#define _CRT_SECURE_NO_WARNINGS 1
#include "information.h"

int main()
{
	list PL;
	InitList(&PL);
	Input(&PL);

	Input(&PL);
	Input(&PL);
	Input(&PL);

	Search(&PL);
	//Delete(&PL);
	Modify(&PL);
	Print(&PL);
	return 0;
}