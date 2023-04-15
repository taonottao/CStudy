#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x<r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] < k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<*px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//杨氏矩阵找某个数
//	//时间复杂度小于O(N)
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	//找到返回1，没找到返回0
//	int x = 3;//行
//	int y = 3;//列
//	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标是：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符就是BCDA
//ABCD左旋两个字符得到CDAB
//void string_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋一个字符
//		char tmp = *str;//1.
//		//2. 后面n-1个字符往前挪
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.把tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}

#include <assert.h>

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	reverse(str, str + k - 1);//左
//	reverse(str + k, str + n - 1);//右
//	reverse(str, str + n - 1);//整体
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA， 返回1
//          给定s1= abcd和s2 =	ABCD， 返回0
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//int is_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//每次左旋一个字符
//		char tmp = *str1;//1.
//		//2. 后面n-1个字符往前挪
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3.把tmp放在最后
//		*(str1 + n - 1) = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

int is_rotate(char* str1, char* str2)
{
	//长度不相等，肯定不是旋转得来
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1. str1字符串后追加一个str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2. 判断str2	是否为str1的子串
	char* ret = strstr(str1, str2);
	return ret != NULL;
	/*if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/
}

int main()
{
	char arr1[20] = "AABCD";
	//ABCDA
	//BCDAA
	//CDAAB
	//DAABC
	//AABCD
	//AABCDAABCD

	char arr2[] = "BCDAA";
	int ret = is_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	
	return 0;
}


//int main()
//{
//	char arr[20] = "hello ";
//	//hello bit\0
//	//strcat(arr, "bit");
//	//strcat(arr, arr); //err
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//
//	return 0;
//}