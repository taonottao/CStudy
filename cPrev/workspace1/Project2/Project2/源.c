#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d%d", &m, &n);
//	k = m % n;
//	if (k != 0)
//	{
//		m = n;
//		n = k;
//	}
//	i = (m * n) / n;
//	printf("最大公约数：%d  最小公倍数：%d\n",n,i);
//
//
//	return 0;
//}
//
//int main()
//{
//	double e = 0.0;
//	int i = 1;
//	int j = 0;
//	int t = 1;
//	double m = 0.0;
//	double n = 0.0;
//	int k = 1;
//	
//	while (1.0 / t >= 1e-4)
//	{
//		m += 1.0 / t;
//		t *= (j + 1)*(j + 2);
//		j+= 2;
//	}
//	while (1.0 / t >= 1e-4)
//	{
//		n -= 1.0 / t;
//		t *= (k + 1)*(k + 2);
//		k += 2;
//	}
//	e = m + n;
//	printf("%lf\n", e);
//			
//	return 0;
//}

//int fun(int x)
//{
//	int a = 0;
//	int flag = 0;
//	int z = 0;
//	for (a = 2;a <= x / 2;a++)
//	{
//		flag = 0;
//		if (x % a == 0)
//		{
//			z= 0;
//			break;
//		}
//		flag = 1;	
//	}
//	if (flag == 1)
//		z = x;
//	else
//		z = 0;
//	return z;
//}
//int main()
//{
//	int high = 0;
//	scanf("%d", &high);
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for (j = high - 1;j > 0;j--)
//	{		
//		while (m < 10)
//		{
//			if (fun(j) != 0)
//			{
//				i += fun(j);
//				m++;
//				break;
//			}
//			break;
//		}				
//	}
//	printf("%d\n", i);
//
//	return 0;
//}



//int main()
//{
//	int m = 2;
//	int n = 1;
//	int sum = 0;
//	int a = 0;
//	while (a < 10)
//	{
//		sum += m / n;
//		m += n;
//		n++;
//		a++;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int a, b, c, i;
//	int w, l;
//	for (i = 1;i <= 18;i++)
//	{
//		a = (118 - 6 * i) / 2;
//		b = (2 * (18 - a) - 20);
//		c = 18 - a - b;
//	}
//	printf("蜘蛛有%d只，蜻蜓有%d只，蝉有%d只", a, b, c);
//}

//
//int main()
//{
//	int zhi, qing, chan;
//	for (zhi = 0;zhi <= 18;zhi++)
//	{
//		for (qing = 0;qing <= 18;qing++)
//		{
//			for (chan = 0;chan <= 18;chan++)
//			{
//				if (zhi * 8 + qing * 6 + chan * 6 == 118 && zhi + qing + chan == 18 && qing * 2 + chan * 1 == 20)
//				{
//					printf("%d,%d,%d", zhi, qing, chan);
//					return 0;
//				}
//			}
//		}
//	}
//}


//int main()
//{
//	int m, n, t, x;
//	printf("please input your two numbers:\n");
//	scanf("%d%d", &m, &n);
//	t = n;
//	if (m < n)
//	{
//		t = m;
//	}
//	for (x = 2;x <= t;x++)
//	{
//		if (m % x == 0 && n % x == 0)
//		{
//			printf("No\n");
//			break;
//		}
//		else
//		{
//			printf("Yes\n");
//			break;
//		}
//	}
//	return 0;
//}


int main()
{
	int i, j, k;
	for (i = 1;i <= 4;i++)
	{
		for (j = 1;j <= 4 - i;j++)
		{
			printf(" ");
		}
		for (k = 1;k <= (2 * i - 1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}