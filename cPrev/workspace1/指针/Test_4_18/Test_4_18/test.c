#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	////�����p����һ��Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//	//2.Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	//3.ָ��ָ��Ŀռ��ͷ�
//
//	return 0;
//}



//3.ָ��ָ��Ŀռ��ͷ�
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
//	////��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	////��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//	//C���Ա����������ݵ�Խ����Ϊ
//	
//	//ָ��ʹ��֮ǰ�����Ч��
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
//	//ָ�� - ָ�� �õ���������ָ��֮���Ԫ�ظ�����
//	//ָ���ָ�������ǰ���ǣ�����ָ��ָ��ͬһ��ռ�
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