#pragma once

//ͷ�ļ��İ���
#include <stdio.h>

//������Ϸ��صĺ�����������������
//ͷ�ļ��İ���

//���ŵĶ���
#define ROW 3
#define COL 3


//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove1(char board[][COL], int row, int col);
void PlayerMove2(char board[][COL], int row, int col);



//�ж���Ӯ���
//1.���1Ӯ - *
//2.���2Ӯ - #
//3.ƽ�� - Q
//4.��Ϸ���� - C
char IsWin(char board[][COL], int row, int col);
