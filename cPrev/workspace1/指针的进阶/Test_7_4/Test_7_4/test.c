#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
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
//	//排成升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}



//void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
//                 size_t num, //排序数据元素的个数
//                  size_t size, //数据中一个元素的大小，单位是字节
//                 int (*compar)(const void*, const void*));//是用来比较待排序数据中的2个元素的函数
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
//	//整型数据的排序
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
//	//使用qsort函数排序结构体数据
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi",15}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}
//
//
//
//
//
//
//
////模仿qsort实现一个冒泡排序的通用算法
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
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for(j = 0; j < sz-i-1; j++)
//		{
//			//两个元素比较
//			if (cmp( (char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test3()
//{
//	//整型数据的排序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//void test4()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi",15}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序
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



//sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的地址
//&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//除此以外， 所有数组名都表示首元素地址

int main()
{
	//整型数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a) );//16
	//printf("%d\n", sizeof(a + 0) );//4/8(32位平台为4， 64位平台为8)   此时计算的是首元素地址的大小
	//printf("%d\n", sizeof(*a) );//4    sizeof(*a)计算的是首元素的大小	
	//printf("%d\n", sizeof(a + 1) );//4/8   a+1 是第二个元素的地址， sizeof计算的是地址的大小
	//printf("%d\n", sizeof(a[1]) );//4

	//printf("%d\n", sizeof(&a) );//4/8
	//printf("%d\n", sizeof(*&a) );//16
	////&a -- int(*p)[4] = &a;
	//printf("%d\n", sizeof(&a + 1) );//4/8   是数组后面的空间的地址
	//printf("%d\n", sizeof(&a[0]) );//4/8
	//printf("%d\n", sizeof(&a[0] + 1) );//4/8

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	////strlen - 通过地址计算长度
	//printf("%d\n", strlen(arr));//随机数
	//printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值 - 6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1



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
	//printf("%d\n", strlen(&arr + 1));//随机值 
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
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
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