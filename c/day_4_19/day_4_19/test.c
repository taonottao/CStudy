#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", j, i, j * i);
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//
//	int i = 0;
//	double sum = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}


//int main()
//{
//
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}


int main()
{

	int arr[10] = { 1, 3, 5, 8, 10, 36, 37, 45, 56, 73};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = (left + right) / 2;
	int m = 0;//m为待查找的数
	scanf("%d", &m);
	int flag = 0;
	while (left <= right)
	{
		if (arr[mid] > m)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if(arr[mid] == m)
		{
			flag = 1;
			printf("%d\n", mid);
			break;
		}
		else
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
	}
	if (flag == 0)
		printf("找不到");
	return 0;
}