#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int  num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}



//������Ƕ�׵��ú���ʽ����
//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "wang";
//	////strcpy(arr1,  arr2);//��
//
//	//printf("%s\n", strcpy(arr1, arr2));//��
//	//printf���ص�������int�ͣ����ص�Ϊ��ӡ����Ļ���ַ��ĸ�����
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��----��֪
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}



#include "Add.h"
#include "sub.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}





//int main()
//{
//	printf("hehe");
//	main();
//
//	return 0;
//}



void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//%u��ʾ�޷�������
	//�ݹ� - �����Լ������Լ�
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ

	return 0;
}