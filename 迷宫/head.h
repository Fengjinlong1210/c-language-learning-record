#pragma once

#include<stdio.h>
#include<windows.h>
#include<conio.h>


#define ROW1 6
#define COLS1 12
#define ROW2 18
#define COLS2 36

void menu()
{
	printf("============================\n");
	printf("############################\n");
	printf("#########  �Թ���Ϸ  #######\n");
	printf("########  ����1 ��ʼ  ######\n");
	printf("########  ����0 �˳�  ######\n");
	printf("######## WASD�����ƶ� ######\n");
	printf("============================\n");
}

void game1();

void game2();

void show_arr();

void move();

void show_arr2();

void move2();