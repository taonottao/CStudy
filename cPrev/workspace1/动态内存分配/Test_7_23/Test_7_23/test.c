#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��̬�ڴ����
#include <stdlib.h>

//int main()
//{
//	//���迪��10��int�Ŀռ�
//	//int arr[10];//ջ�� 
//	int* p = (int*)malloc(10*sizeof(int));//��̬�ڴ濪��   void*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		//printf("malloc  error\n");
//		perror("main");
//		return 0;
//	}
//	//ʹ��
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
//	//���տռ�
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