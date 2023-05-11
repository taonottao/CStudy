#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��Ϸ����
void game()
{
	//����
	char board[ROW][COL];
	//��ʼ��I����
	initBoard(board, ROW, COL);
	//��ӡ����
	boardDisplay(board, ROW, COL);

	char ret = 0;

	while (1)
	{
		playerMove(board, ROW, COL);
		boardDisplay(board, ROW, COL);

		ret = isWin(board, ROW, COL);

		if (ret == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("ƽ��\n");
			break;
		}

		computerMove(board, ROW, COL);
		boardDisplay(board, ROW, COL);

		ret = isWin(board, ROW, COL);

		if (ret == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		//��Ϊ�������,�������һ�������������
		/*else if (ret == 'Q')
		{
			printf("ƽ�� ");
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

//�ж������Ƿ�������
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
		//�����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	}

	for (j = 0; j < col; j++)
	{
		//�����
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
			return board[0][j];
	}

	//�Խ������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[1][1];
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return board[1][1];

	//ƽ��
	if (!ret)
		return 'Q';
	return 'C';
}