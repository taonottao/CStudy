#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//�ų�����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}



//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//                 size_t num, //��������Ԫ�صĸ���
//                  size_t size, //������һ��Ԫ�صĴ�С����λ���ֽ�
//                 int (*compar)(const void*, const void*));//�������Ƚϴ����������е�2��Ԫ�صĺ���
#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	//�������ݵ�����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//
//}
//
//void test2()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi",15}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}
//
//
//
//
//
//
//
////ģ��qsortʵ��һ��ð�������ͨ���㷨
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, 
//							int sz,
//							int width,
//							int (*cmp)(const void* e1, const void* e2) )
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ�˵�����
//		int j = 0;
//		for(j = 0; j < sz-i-1; j++)
//		{
//			//����Ԫ�رȽ�
//			if (cmp( (char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test3()
//{
//	//�������ݵ�����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//void test4()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi",15}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//��������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//}
//int main()
//{ 
//	//test1();
//	//test2();
//	//test3();
//	test4();
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//
//	return;
//}



//sizeof(������) - ��������ʾ�������� - ���������������ĵ�ַ
//&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//�������⣬ ��������������ʾ��Ԫ�ص�ַ

int main()
{
	//��������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a) );//16
	//printf("%d\n", sizeof(a + 0) );//4/8(32λƽ̨Ϊ4�� 64λƽ̨Ϊ8)   ��ʱ���������Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(*a) );//4    sizeof(*a)���������Ԫ�صĴ�С	
	//printf("%d\n", sizeof(a + 1) );//4/8   a+1 �ǵڶ���Ԫ�صĵ�ַ�� sizeof������ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(a[1]) );//4

	//printf("%d\n", sizeof(&a) );//4/8
	//printf("%d\n", sizeof(*&a) );//16
	////&a -- int(*p)[4] = &a;
	//printf("%d\n", sizeof(&a + 1) );//4/8   ���������Ŀռ�ĵ�ַ
	//printf("%d\n", sizeof(&a[0]) );//4/8
	//printf("%d\n", sizeof(&a[0] + 1) );//4/8

	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	////strlen - ͨ����ַ���㳤��
	//printf("%d\n", strlen(arr));//�����
	//printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ - 6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ - 1



	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8


	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//���ֵ 
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8


	char* p = "abcdef";
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5


	//printf("%d\n", sizeof(p) );//4/8
	//printf("%d\n", sizeof(p + 1) );//4/8
	//printf("%d\n", sizeof(*p) );//1
	//printf("%d\n", sizeof(p[0]) );//1   p[0] --> *(p+0)
	//printf("%d\n", sizeof(&p) );//4/8
	//printf("%d\n", sizeof(&p + 1) );//4/8
	//printf("%d\n", sizeof(&p[0] + 1) );//4/8	


	return 0;
}