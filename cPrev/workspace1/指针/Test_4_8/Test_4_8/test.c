#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* pa = &a;//�õ���a��4���ֽ��еĵ�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}



//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4   ָ�������С�������޹�
//
//	return 0;
//
//}




//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�����߶�Զ��������
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}




int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		*(p + i) = 1;
	}

	return 0;
}