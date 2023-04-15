#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//完全初始化
//	int arr1[10] = { 0,1,2,3,4 };//不完全初始化
//	int arr2[] = { 0,1,2,3,4 };
//	//int arr2[5] = { 0,1,2,3,4 };   //与上一行代码等价
//
//	char ch1[6] = { 'w','a','n','g' };
//	char ch2[] = { 'w','a','n','g' };
//	char ch3[6] = "wang";//w a n g \0 \0
//	char ch4[] = "wang";//w a n g \0
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	printf("%s\n", ch3);
//	printf("%s\n", ch4);
//	printf("%d\n", strlen(ch1));//4
//	printf("%d\n", strlen(ch2));//随机值
//	printf("%d\n", strlen(ch3));//4
//	printf("%d\n", strlen(ch4));//4
//
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	for (i = 0;i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	//printf("%x\n", 0x12);//%x-打印16进制的数
//	//printf("%p\n", 0x12);//%p-按地址的格式打印-十六进制的打印
//
//	int arr[10] = { 0 };
//	for (int i = 0;i < 10;i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;//数组名是数组首元素地址
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { 1,2,3,4,5,6,7 };
//	int arr3[3][4] = { {1,2}, {3,4}, {5,6} };
//	//二维数组初始化行数可以省略，列数不行
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr3[%d][%d]=%p\n", i, j, &arr3[i][j]);
//		}
//		
//	}
//	return 0;
//}




//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3,2,4,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	return 0;
}

//数组名是数组首元素地址
//但是有2个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址