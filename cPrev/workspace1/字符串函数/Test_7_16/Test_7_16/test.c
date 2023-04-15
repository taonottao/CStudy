#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void fun(char c, int d)
//{
//	int i = 1;
//	for (i = 1; i <= d; i++)
//	{
//		if ( ((c + i) <= 'z' && (c + i)> 'Z'+6) || ((c + i) <= 'Z' && (c + i)>='A'))
//		{ 
//			printf("%c", c + i);
//		}
//		else
//		{
//			printf("%c", c - 26 + i);
//		}
//	}
//}
//
//int main()
//{
//	char c = 'z';
//	int d = 6;
//	fun(c, d);
//
//	return 0;
//}



#include <assert.h>

//1.计数器
//2. 递归
//3. 指针- 指针
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL)
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//char arr[] = "abc";
//	char arr[] = { 'a','b','c' ,'\0'};
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=");
//	}
//
//	return 0;
//}



//strcpy拷贝'\0'
//int main()
//{
//	char arr[20] = "##########";
//	//arr = "hello";//err
//	//char* p = "hello";//right
//	//strcpy(arr, "hello");
//	//char arr2[] = { 'a', 'b', 'c' };
//	strcpy(arr, arr2);//err
//	printf("%s\n", arr);
//
//	return 0;
//}


#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找目标字符串中的\0
	while (*dest)
	{
		dest++;
	}
	//2.追加源字符串，包含\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目标空间的起始地址
}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//strcat(arr1, "world");//字符串追加（连接)
//	//my_strcat(arr1, arr2);//字符串追加（连接)
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}



//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//err
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	char* p = "abc";
//	char* q = "abcdef";
//	int ret = strcmp(p, q);
//	printf("%d\n", ret);
//	return 0;
//}



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbb";
//	//int ret = strcmp(p, q);
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q");
//	}
//	else
//	{
//		printf("p = q");
//	}
//
//	return 0;
//}



//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);//qwcdef
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//在arr1中查找是否包含arr2数组
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//
//	return 0;
//}

//
//KMP - 字符串查找算法
//





//wt@shuai.niu
//wt
//shuai
//niu

//192.168.3.122
//192
//168
//3
//122

//strtok
//wt@shuai.niu
//@.

//int main()
//{
//	char arr[] = "wt@shuai.niu hehe";
//	char* p = "@. ";
//	//strtok(arr, "@.")
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	//wt\0shuai\0niu\0
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}


//使用库函数的时候
//调用库函数失败时，都会设置错误码
//全局错误码errno
//int errno;//5
#include <errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;

	return 0;
}