#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int i;//i是全局变量，没有初始化，默认为0
//int main()
//{
//	i--;
//	//sizeof这个操作符算出的结果类型是unsigned int
//	//无符号整形与有符号整型进行比较时，有符号整型要先装换成无符号整形
//	if (i > sizeof(i))//-1 > 4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}



//求Sn = a + aa + aaa +aaaa ...
//例如： Sn = 2 + 22 + 222 + 2222 + ....
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//写一个函数打印arr数组的内容，不使用数组下标	，使用指针。
//arr是一个整型一维数组
//void print(int* p,int r)
//{
//	int i = 0;
//	for (i = 0; i < r;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	
//	//print(arr, sz);
//
//	return 0;
//}



#include <math.h>
#include <string.h>
//求出0-100000之间的所有水仙花数并输出
//水仙花数是指一个n位数，其各位数的n次方之和正好等于该数本身
//如：153 = 1^3 + 5^3 + 3^3
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		
//		
//		//判断i是否会自幂数
//		//1.计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10 )
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算i的每一位数的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum +=pow((tmp % 10),n);//pow计算某数的n次方
//			tmp = tmp / 10;
//		}
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000;i++)
//	{
//		char a[100001] = { i };
//		int n = strlen(a);
//	}
//}



//写一个函数，可以逆序一个字符串的内容
//void excge(char a[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
#include <assert.h>
//void excge(char* str, int l)
//{
//	assert(str != NULL);//断言
//	char* left = str;
//	char* right = str + l - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--; 
//	}
//}
//int main()
//{
//	char ch[] = "abcde";
//	int len = strlen(ch);
//	excge(ch,len);
//	printf("%s\n", ch);
//	return 0;
//}




//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j< 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	//下
//	//for (i = line - 1; i > 0;i--)
//	//{
//	//	//打印一行
//	//	//空格
//	//	int j = 0;
//	//	for (j = 0;j <= line-i-1; j++)
//	//	{
//	//		printf(" ");
//	//	}
//	//	//*
//	//	for (j = 0;j < 2*i-1 ; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - i - 2) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝几瓶？（编程实现）
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if(money > 0)
//		total = 2 * money - 1;
//	/*int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("%d\n", total);
//
//	return 0;
//}




//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有的偶数位于数组的后半部分
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从前往后找一个偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从后往前找一个奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);

	return 0;
}