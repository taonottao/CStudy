#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������
// 
// ������
//�ֲ������������򣺱������ڵľֲ���Χ
//ȫ�ֱ�����������
//int t_wang = 2021; //ȫ�ֱ���
//int main()
//{
//	printf("1:%d\n", t_wang);
//	printf("hehe\n");
//	{
//		int a = 10;//�ֲ�����
//		printf("2:%d\n", t_wang);
//	}
//	printf("3:%d\n", t_wang);
//	return 0;
//}

//����һ�±�����add.c��ģ�
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//}

//����
//#define MAX 10000
//int main()
//{
//	//1.���泣��
//	/*3.14;
//	10;
//	'a';
//	"asdfg";*/
//
//	//2.const���εĳ�����
//	//const int sum = 10;//sum�ǳ�����-���г����ԣ����ܱ��ı�����ԣ�
//	//sum = 20;  
//	//int arr[10] = {0};
//	//const int n = 10;
//	//int arr2[n];//n�Ǳ���������
//
//	//3.#define����ı�ʶ������
//	//MAX = 20000; //���ɸ���
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	
//	return 0;
//}

//�Ա�
//enum Sex
//{
//	//����ö�����ͱ�����δ������ȡֵ
//	//ö�ٳ�����Ĭ�ϴ�0��ʼ
//	MALE = 3, //����ֵ	
//	FEMALE,	
//	SECRET	 
//};
//int main()
//{
//	//4.ö�ٳ���
//	//����һһ�оٵĳ���
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//�ַ�������һ���ַ�-��""��������һ���ַ�
//int main()
//{
//	"asfdg";
//	"helloworld";
//	return 0;
//}
//int main()
//{
//	//�ַ�����-������һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־
//	char arr[] = "hello";
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//	//��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2));//���ֵ
//	printf("%d\n", strlen(arr3));//3
//	//int len = strlen("abc");  //string length
//	//printf("%d\n", len);
//	//��ӡ�ַ���
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//ת���ַ�--ת����ԭ������˼
//int main()
//{
////	//printf("c:\test\test.c");
////	//printf("c:\\test\\test.c\n");
////	//printf("ab\ncd");
//	printf("\a\a\a");
//	return 0;
//}

int main()
{
	printf("%c\n", '\130'); //8������130��10�����е�88
	//X--ASCII��ֵ��88
	printf("%c\n", 33);
	
	return 0;
}