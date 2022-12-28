#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			//printf("game\n");
			game();
			break;
		case 0:
			system("cls");
			printf("exit\n");
			break;
		default:
			system("cls");
			printf("please input again\n");
			break;
		}
	} while (input);
	return 0;
}