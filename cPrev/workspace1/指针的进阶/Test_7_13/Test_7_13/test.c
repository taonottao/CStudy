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
//	//���Ͼ�����ĳ����
//	//ʱ�临�Ӷ�С��O(N)
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	//�ҵ�����1��û�ҵ�����0
//	int x = 3;//��
//	int y = 3;//��
//	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�����ǣ�%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ�����BCDA
//ABCD���������ַ��õ�CDAB
//void string_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������һ���ַ�
//		char tmp = *str;//1.
//		//2. ����n-1���ַ���ǰŲ
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.��tmp�������
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
//	reverse(str, str + k - 1);//��
//	reverse(str + k, str + n - 1);//��
//	reverse(str, str + n - 1);//����
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



//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA�� ����1
//          ����s1= abcd��s2 =	ABCD�� ����0
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//int is_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//ÿ������һ���ַ�
//		char tmp = *str1;//1.
//		//2. ����n-1���ַ���ǰŲ
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3.��tmp�������
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
	//���Ȳ���ȣ��϶�������ת����
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1. str1�ַ�����׷��һ��str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2. �ж�str2	�Ƿ�Ϊstr1���Ӵ�
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