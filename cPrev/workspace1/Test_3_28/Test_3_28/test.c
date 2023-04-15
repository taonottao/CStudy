#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//nn乘法表函数版
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//函数
//	print_table(n);
//	return 0;
//}





//将arr[] = "abcdef" 变为 "fedcba"
//①循环
int my_strlen(char a[])
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}
//void reverse_string(char a[])
//{
//	int left = 0;
//	int right = my_strlen(a) - 1;
//	while (left < right)
//	{
//		char tmp = *(a + left);//a[left]
//		*(a + left) = *(a + right);
//		*(a + right) = tmp;
//		left++;
//		right--;
//	}
//}

//②递归
//void reverse_string(char* a)
//{
//	char tmp = *a;
//	int len = my_strlen(a);
//	*a = *(a + len - 1);
//	*(a + len - 1) = '\0';
//	if (my_strlen(a + 1) >= 2)
//	{
//		reverse_string(a + 1);
//	}
//	*(a + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}




//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}




//函数递归实现n的k次方
double Pow(int x, int y)
{
	if (y > 0)
		return x * Pow(x, y - 1);
	else if (y == 0)
		return 1.0;
	else
		return 1.0 /(Pow(x, -y));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);

	return 0;
}