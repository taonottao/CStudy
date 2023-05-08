#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n > 0)
//	{
//		sum = n % 10 + DigitSum(n / 10);
//	}
//	return sum;
//}
//
//int main()
//{
//	int ret = DigitSum(1709);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int MyStrlen1(char* ch)
//{
//	int len = 0;
//	while (*ch != '\0')
//	{
//		len++;
//		ch++;
//	}
//	return len;
//}
//int len = 0;
//int MyStrlen2(char* ch)
//{	
//	if(*ch != '\0')
//	{
//		len = 1 + MyStrlen2(ch + 1);
//	}
//
//	return len;
//}
//
//int main()
//{
//	char ch[] = "hello";
//	
//	int ret1 = MyStrlen1(ch);
//	int ret2 = MyStrlen2(ch);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}


//int func1(int n)
//{
//	if (n == 0)
//		return 1;
//	
//
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret*= i;
//	}
//	return ret;
//}
//
//int func2(int n)
//{
//	if (n == 0)
//		return 1;
//
//	int ret = 1;
//	if(n > 0)
//	{
//		ret = n * func2(n - 1);
//	}
//	return  ret;
//}
//
//int main()
//{
//	int n = 4;
//
//	int ret1 = func1(n);
//	int ret2 = func2(n);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}


void print(int n)
{	
	int ret = 0;
	if (n >9)
	{
		ret = n % 10;
		print(n / 10);
		printf("%d ", ret);
	}
	else
	{
		printf("%d ", n % 10);
	}

}

int main()
{
	int a = 1205;
	print(a);

	return 0;
}