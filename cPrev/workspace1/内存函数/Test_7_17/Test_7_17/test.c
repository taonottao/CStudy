#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>


//strerror
//perror
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


#include <ctype.h>
//int main()
//{
//	char ch = 'a';
//	//isdigit - ����������ַ����ط�0ֵ��������������ַ�����0
//	//int ret = isdigit(ch);
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//	return 0;
//}



//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);			
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}



#include <assert.h>
//memcpyӦ�ÿ������ص����ڴ�
//memmove�������Դ����ڴ��ص������
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//ǰ -> ��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��> ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//                      1 2 1 2 3 4 5 8 9 10
//	//my_memmove(arr1 + 2, arr1, 20);
//	my_memmove(arr1, arr1+2, 20);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	return 0��
//}




//memcmp - �ڴ�Ƚ�
//
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//
//	return;
//}



//int main()
//{
//	int arr[10] = { 0 };//20
//	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ�
//
//	return 0;
//}