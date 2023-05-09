#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��Ϸ����
void game()
{
	char board[ROW][COL];
	initBoard(board, ROW, COL);
	boardDisplay(board, ROW, COL);
	playerMove(board, ROW, COL);
	boardDisplay(board, ROW, COL);
	computerMove(board, ROW, COL);
	boardDisplay(board, ROW, COL);
}

void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
		for (i = 0; i < row; i++)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				board[i][j] = ' ';
			}
		}
}

void boardDisplay(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) 
		{
			for (j = 0; j < col; j++)
			{

				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void playerMove(char board[ROW][COL], int row, int col)
{
	printf("��������Ҫ�ߵ�λ������:");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && y > 0 && x < 4 && y < 4)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��, ����������!!!\n");
			}
		}
		else
		{
			printf("��������곬���߽�,����������!!!\n");
		}
	}
	
}