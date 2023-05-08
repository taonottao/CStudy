#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//
//    return 0;
//}


//int Fun(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	return Fun(n - 1) + Fun(n - 2);
//}
//
//int Fun2(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int ret = 0;
//	int i = 1;
//	int j = 1;
//	int count = 0;
//	while (count < n-2)
//	{
//		ret = i + j;
//		i = j;
//		j = ret;
//		count++;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int ret = Fun2(5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int Fun(int n, int k)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i < k; i++)
//	{
//		ret *= n;
//	}
//	return ret;
//}

double Fun(int n, int k)
{
		if (k == 0)
			return 1;
		else if (k > 0)
			return n * Fun(n, k - 1);
		else
			return 1.0 / Fun(n, -k);
}

int main()
{
	double ret = Fun(2, -1);
	printf("%lf\n", ret);

	return 0;
}