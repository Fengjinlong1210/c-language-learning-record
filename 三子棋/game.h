#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 3
#define COL 3

//²Ëµ¥
void menu();

void game();

void init_board(char board[ROW][COL], int row, int col);

void print_board(char board[ROW][COL], int row, int col);

void player_move(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

char judge_win(char board[ROW][COL], int row, int col);

char judge_draw(char board[ROW][COL], int row, int col);

void judge_end(char ret,char board[ROW][COL]);