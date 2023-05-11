#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void boardDisplay(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	printf("-----ɨ����Ϸ----\n");
	for (i = 0; i < COLS - 1; i++)
	{//�к�
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < ROWS - 1; i++)
	{
		printf("%d ", i);//�к�
		int j = 0;
		for (j = 1; j < COLS - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = EASY_COUNT;
	while (n > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			n--;
		}
	}
}

char getCount(char mine[ROWS][COLS], int x, int y)
{
	char ret = 0;
	int i = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			ret += mine[i][j];
		}
	}
	return  ret - 8 * '0';
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < row* col - EASY_COUNT)
	{
		printf("��������Ҫ�Ų��λ��:");
		scanf("%d %d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("���ź�, �㱻ը����\n");
			boardDisplay(mine, ROWS, COLS);
			break;
		}
		else if (x >= 1 && y >= 1 && x <= 9 && y <= 9 && mine[x][y] == '0')
		{
			char ret = 0;
			ret = getCount(mine, x, y);
			show[x][y] = ret;
			boardDisplay(show, ROWS, COLS);
			count++;
		}
		else
		{
			printf("���������Ƿ�, ����������!!!!\n");
		}
	}
	if (count == row * col - EASY_COUNT)
	{
		printf("��ϲ��, ���׳ɹ�!!\n");
		boardDisplay(mine, ROWS, COLS);
	}
	
}
