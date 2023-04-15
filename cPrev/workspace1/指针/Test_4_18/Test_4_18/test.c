#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	////这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//	//2.越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	//3.指针指向的空间释放
//
//	return 0;
//}



//3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int  main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}



//int main()
//{
//	////当前不知道p应该初始化为什么地址时，直接初始化为NULL
//	//int* p = NULL;
//	////明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//	//C语言本身不会检查数据的越界行为
//	
//	//指针使用之前检查有效性
//	int* p = NULL;
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//指针 - 指针 得到的是两个指针之间的元素个数。
//	//指针和指针相减的前提是：两个指针指向同一块空间
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);//err
//
//	return 0;
//}



int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);

	return 0;
}