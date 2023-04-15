#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1. play:>    ******\n");
	printf("*****     0. exit:>     ******\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS];//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine , ROWS, COLS, '0');
	InitBoard(show , ROWS, COLS, '*');

	//��ӡһ������
	//DisplayBoard(mine,ROW, COL);
	DisplayBoard(show,ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{		
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
				break;
		}
	} while (input);

	return 0;
}