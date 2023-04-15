#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	scanf("%d %d",&a,&b);
//	int i = 0;
//	for (i = 1;i<=a;i++)
//	{
//		if (b * i % a == 0)
//		{
//			k = b * i;
//			break;
//		}
//	}
//	printf("%d\n", k);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}	
//	
//	return 0;
//}





//I like beijing.
//beijing. like I
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//三步翻转法
	//1.字符串整体翻转
	//.gnijieb ekil I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.每个单词逆序
	//beijing. like I
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);

	return 0;
}