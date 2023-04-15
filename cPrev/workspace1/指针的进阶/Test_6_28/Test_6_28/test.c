#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//数组指针
//是一种指针
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
//	int(*parr)[10] = &arr;//取出的是数组地址
//	//parr就是一个数组指针 - 其中存放的是数组的地址
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
//数组名是数组首元素地址
//但是有两个例外：
//1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址
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
//	//二维数组的数组名表示首元素的地址
//	//二维数组首元素是第一行
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//
//	int(*parr[10])[5];
//	//parr是一个存储数组指针的数组
//	//能存10个数组指针
//	//每个数组指针指向一个数组，数组有5个元素，每个元素为int型
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