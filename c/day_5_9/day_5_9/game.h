#pragma once

#include <stdio.h>

#define ROW 3
#define COL  3

//��Ϸ����
void game();

//��ʼ������
void initBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void boardDisplay(char board[ROW][COL], int row, int col);

//�������
void playerMove(char board[ROW][COL], int row, int col);
