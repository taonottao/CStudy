#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//����ָ��
//��һ��ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5];
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//ȡ�����������ַ
//	//parr����һ������ָ�� - ���д�ŵ�������ĵ�ַ
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}

//
//��������������Ԫ�ص�ַ
//�������������⣺
//1.sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//	//printf("%d ", arr[i]);
//	//}
//
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//
//	return 0;
//}



//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r;i++)
//	{
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//
//	//��ά�������������ʾ��Ԫ�صĵ�ַ
//	//��ά������Ԫ���ǵ�һ��
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//
//	int(*parr[10])[5];
//	//parr��һ���洢����ָ�������
//	//�ܴ�10������ָ��
//	//ÿ������ָ��ָ��һ�����飬������5��Ԫ�أ�ÿ��Ԫ��Ϊint��
//
//	return 0;
//}


void test(int arr)
{}
void test(int arr[10])
{}
void test(int * arr)
{}
void test2(int * arr[20])
{}
void test2(int * *arr)

int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);

	return 0;
}