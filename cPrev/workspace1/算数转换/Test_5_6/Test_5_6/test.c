#define _CRT_SECURE_NO_WARNINGS 1\

#include <stdio.h>

//NumberOf1�������n�Ķ����Ʋ�����1�ĸ���
// 
//int NumberOf1(unsigned int n)
//{
//	int ret = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			ret++;
//		}
//		n /= 2;
//	}
//	return ret;
//
//}
// 
//int NumberOf1( int n)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			ret++;
//		}
//	}
//
//	return ret;
//
//}
//
int NumberOf1( int n)
{
	int ret = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
			ret++;
	}	

	return ret;
}
//int main()
//{
//	int n = -1;
//	int count = NumberOf1(n);
//	printf("%d\n", count);
//
//	return 0;
//}
//n = n&(n-1)
//n = 15
//1111 - n
//1110 - n-1
//1110 - n
//1101 - n-1
//1100 - n
//1011 - n-1
//1000 - n
//0111 - n-1
//0000 - n




//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//��� - ��ͬΪ0����ͬΪ1
//	//ͳ��ret�Ķ��������м���1����˵��m��n���������м�λ��ͬ
//	count = NumberOf1(ret);
//	/*for (i = 0;i < 32;i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}*/
//	printf("%d\n", count);
//
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn�ж������е�����λ��ż��λ
//	int i = 0;
//	//��ȡż��λ
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ȡ����λ
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d  %d\n", a, b);
//
//	return 0;
//}



