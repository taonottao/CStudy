#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

//��������
void computerMove(char board[ROW][COL], int row, int col);

//isWin: �ж����״̬
//1. ���� '*' , ���Ӯ
//2. ���� '#', ����Ӯ
//3. ���� 'Q' , ƽ��
//4. ���� 'C' , ��Ϸ����
char isWin(char board[ROW][COL], int row, int col);