#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//���鱾�����һ����ַ������&����
//	printf("��ȷ���������(Y/N):>");
//	//��������
//	//getchar();//����'\n'
//	int tmp = 0;
//	//���������ڶ���ַ�
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);//���
//		i++;//����
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( ; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//��ѭ���˼��Σ�
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)  //��ʱ�ж��е�"k = 0"��"0"��"��"����˼������ѭ������Ϊ0
	{
		k++;
	}
	return 0;
}