#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define ROWS 11
#define COL 9
#define COLS 11
#define EASY_COUNT 10

//��ʼ������
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);
//չʾ����
void boardDisplay(char board[ROWS][COLS], int row, int col);
//������
void setMine(char board[ROWS][COLS], int row, int col);
//����
void findMine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
