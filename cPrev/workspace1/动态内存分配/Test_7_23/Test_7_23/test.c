#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//动态内存分配
#include <stdlib.h>

//int main()
//{
//	//假设开辟10个int的空间
//	//int arr[10];//栈区 
//	int* p = (int*)malloc(10*sizeof(int));//动态内存开辟   void*
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		//printf("malloc  error\n");
//		perror("main");
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//回收空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}


int main()
{
	//int* p = (int*)malloc(40);
	int* p = calloc(10, sizeof(int));

	if (p == NULL)
		return 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	p = NULL;

	return 0;
}