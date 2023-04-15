#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//柔性数组的特点
//1.结构中柔性数组之前必须至少有一个其他成员
//2.sizeof返回的这种结构的大小，不包括柔性数组的内存
//3.包含柔性数组成员的结构用malloc()函数进行内存的动态分配，
//   并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小


struct S
{
	int n;
	//int arr[];//大小未知   arr为柔性数组
	int arr[0];//大小未知   arr为柔性数组
};

int main()
{
	//期望arr大小为10int
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	//扩容
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//使用

	//释放
	free(ps);
	ps = NULL;

	return 0;
}