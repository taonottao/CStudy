#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�������������Ӵ�С���
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

void tmp(int * pa ,int * pb,int * pc)
{
	if (* pa < * pb)
	{
		int i = 0;
		i = *pa;
		*pa = *pb;
		*pb = i;

	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	tmp(&a ,&b);
	tmp(&a ,&c);
	tmp(&b ,&c);
	printf("%d %d %d\n", a, b, c);
	return 0;
}  //����

//�������������Լ��
// ��
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	//������������С���Ǹ�Ϊ���Լ��
//	int max = m > n ? n : m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ��%d\n", max);
//			break;
//		}		
//		max--;
//	}
//	return 0;
//}

//��շת�����
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int t;
//	while ( t = m % n )
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//	return 0;
//}


//��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{			
//			if (i % j == 0)
//			{
//				break;
//			}
//				
//		}
//		if (j == i / 2 + 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	
//
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//����i������
//		for (j = 2; j <= sqrt(i); j++)//sqrt - ��ƽ�����⺯�� math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}


//�ػ�����
//ֻҪ�������������Խ���1����֮�ڹػ���������룺��������ȡ���ػ���
//shutdown -s -t 60
//shutdown -a
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system() -ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������")== 0) //strcmp - string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system() -ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0) //strcmp - string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//
//	return 0;
//}

//goto���ֻ����һ��������Χ����ת�����ܿ纯��