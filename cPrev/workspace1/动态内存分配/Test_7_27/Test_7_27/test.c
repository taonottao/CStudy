#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//��̬�ڴ濪�ٵĳ�������
//1.�Կ�ָ��Ľ����ò���
//2.�Զ�̬���ٿռ��Խ�����
//3.ʹ��free�ͷŷǶ�̬���ٵĿռ�
//4.ʹ��free�ͷŶ�̬�ڴ��е�һ����
//5.��ͬһ�鶯̬�ڴ����ͷ�
//6.��̬�����ڴ������ͷţ��ڴ�й©��


//1.
//int main()
//{
//	int* p = (int*)malloc(1000000000);
//
//	return 0;
//}



//2.
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}


//3.
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4.
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			return;
//		}
//
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*p++ = i;
//		}
//		free(p);
//		p = NULL;
//
//	return 0;
//}


//5.
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//
//	free(p);
//
//	return 0;
//}


//6.
void test()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return;
	}
	//ʹ��
}
int main()
{
	test();

	return 0;
}