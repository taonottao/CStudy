#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h" 

//������Ϸ���߼�

void menu()
{
	printf("****************************\n");
	printf("******       1. play        *****\n");
	printf("******       0. exit         *****\n");
	printf("****************************\n");
}

void game()
{
	//�洢���� - ��ά����  
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);

	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//���1��
		PlayerMove1(board, ROW, COL); 
		DisplayBoard(board, ROW, COL);
		//�ж����1�Ƿ�Ӯ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//���2��
		PlayerMove2(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж����2�Ƿ�Ӯ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���1ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���2ʤ��\n");
	}
	else
	{
		printf("ƽ��");
	}
	DisplayBoard(board, ROW, COL);
	
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}