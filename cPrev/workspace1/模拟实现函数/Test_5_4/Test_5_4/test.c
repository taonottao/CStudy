#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//模拟实现strcpy函数
#include <assert.h>
//char*  my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//		
//	}
//	//*dest = *src;
//	//char* ret = dest;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	;//1.目标空间的起始地址  2. 源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	//const修饰变量，这个变量被称为常变量,不能被修改，但本质上还是变量
//	const int num = 10;
//	int n = 20;
//	
//	 int* const p = &num;
//	//const修饰指针变量的时候
//	// const如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
//	//          但是指针指向的内容可以被修改
//	*p = 20;
//	//p = &n;
//
//	//const int* p= &num;
//	////const修饰指针变量的时候
//	//// const如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	////          但是指针变量本身是可以修改的
//	////*p = 20;
//	//p = &n;
//	
//	printf("%d\n", num);
//
//	return 0;
//}



//模拟实现strlen函数
//size_t - unsigned int 无符号整型
size_t my_strlen(const char* dest)
{
	assert(dest!= NULL);
	size_t count = 0;
	while (*dest++ != '\0')
	{
		count++;		
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	int a = my_strlen(arr);
	printf("%d\n", a);

	return 0;
}