#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//�����������͵ĵط�д�ɣ�void����ʾ��������������κ�ֵ
//void Swap(int a, int b)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ�������������������͵�ֵ
//	printf("����ǰ��a = %d   b = %d\n", a, b);
//	Swap(a, b);
//	printf("����ǰ��a = %d   b = %d\n", a, b);
//
//	return 0;
//}   ����

//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//pa��һ��ָ�����
//	*pa = 32;
//	printf("%d\n", a);
//
//	return 0;
//}


void Swap(int * pa, int * pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//дһ�������������������͵�ֵ
	printf("����ǰ��a = %d   b = %d\n", a, b);
	Swap(&a, &b);
	printf("������a = %d   b = %d\n", a, b);

	return 0;
}