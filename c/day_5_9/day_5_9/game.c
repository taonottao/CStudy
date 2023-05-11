#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//游戏内容
void game()
{
	//棋盘
	char board[ROW][COL];
	//初始化I棋盘
	initBoard(board, ROW, COL);
	//打印棋盘
	boardDisplay(board, ROW, COL);

	char ret = 0;

	while (1)
	{
		playerMove(board, ROW, COL);
		boardDisplay(board, ROW, COL);

		ret = isWin(board, ROW, COL);

		if (ret == '*')
		{
			printf("玩家胜利\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("平局\n");
			break;
		}

		computerMove(board, ROW, COL);
		boardDisplay(board, ROW, COL);

		ret = isWin(board, ROW, COL);

		if (ret == '#')
		{
			printf("电脑胜利\n");
			break;
		}
		//因为玩家先手,所以最后一颗子由玩家落下
		/*else if (ret == 'Q')
		{
			printf("平局 ");
			break;
		}*/
	}
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
	printf("请输入您要走的位置坐标:");
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
				printf("该位置已被占用, 请重新输入!!!\n");
			}
		}
		else
		{
			printf("输入的坐标超出边界,请重新输入!!!\n");
		}
	}
}

void computerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断棋盘是否已下满
int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}

char isWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = isFull(board, row, col);
	
	for (i = 0; i < row; i++)
	{
		//行相等
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	}

	for (j = 0; j < col; j++)
	{
		//列相等
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
			return board[0][j];
	}

	//对角线相等
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[1][1];
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return board[1][1];

	//平局
	if (!ret)
		return 'Q';
	return 'C';
}