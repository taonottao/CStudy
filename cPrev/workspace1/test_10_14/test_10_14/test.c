#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ע��ʹ�������͸��Ӵ����
//


/*
��֧��Ƕ��ע��
*/ 

int main()
{
	int  input = 0 ;
	//printf("���˴�ѧ���Ƿ�ѡ��ú�ѧϰ?(1/0)\n");
	scanf("%d", &input);
	if (input == 1)
		{
			printf("��offer\n");
		}
	else
		{
			printf("��ש\n");
		}
	return 0;
}
////
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	if (i > 10)
//		sum = ++i;
//	else
//		sum = --i;
//	printf("sum=%d",sum);
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("����д����%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//		printf("��offer");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1 , num2);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//���� - һ����ͬ���͵�Ԫ�صļ���
//	//���������±������ʵ�
//	//��10������1-10������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	return 0;
//}