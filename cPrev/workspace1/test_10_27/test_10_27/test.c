#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ���������
//����һ��������Щ���������Լ���ơ��������Աһ���ܴ�ķ��ӿռ�
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//��arr2�е�Ԫ�ؿ�����arr1��
//	printf("%s\n", arr1);
//
//	return 0;
//}

//дһ���������ҳ����������е����ֵ��
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("%d\n", max);
//	return 0;
//}



//дһ��������������������������
//��һ�������������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a =%d b =%d\n", a, b);
//	Swap(a, b);
//	printf("������a =%d b =%d\n", a, b);
//	 
//	return 0;
//} ������

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

void Swap(int *pa, int *pb)
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
	printf("����ǰ��a =%d b =%d\n", a, b);
	Swap(&a, &b);
	printf("������a =%d b =%d\n", a, b);
	 
	return 0;
} 