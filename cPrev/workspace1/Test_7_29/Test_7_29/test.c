#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//有序的插入一个整数
int main()
{
	int arr[51] = { 0 };
	//输入
	int n = 0;
	scanf("%d", &n);
	//n个数的输入
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//要插入的数
	int m = 0;
	scanf("%d", &m);
	//插入数据
	//for (i = n - 1; i >= 0; i--)
	//{
	//	if (arr[i] > m)
	//	{
	//		arr[i + 1] = arr[i];
	//	}
	//	else
	//	{
	//		arr[i + 1] = m;
	//		break;
	//	}
	//}
	////插入的数据小于所有的数据
	//if (i < 0)
	//	arr[0] = m;
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			break;
		}
	}
	arr[i+1] = m;
	//输出
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}