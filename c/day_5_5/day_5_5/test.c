#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}



//void swap(int* arr1, int* arr2, int sz)
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	swap(arr1, arr2, sz);
//
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr, 5);
//	reverse(arr, 5);
//	printf("\n");
//	print(arr, 5);
//	init(arr, 5);
//	printf("\n");
//	print(arr, 5);
//
//	return 0;
//}

//void bubbleSort(int* arr, int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = { 5,4,3,2,1 };
//	bubbleSort(arr, 5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int myStrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//
//void  reverse_string(char* string)
//{
//	if (*string == '\0')
//	{
//		return;
//	}
//	int len = myStrlen(string);
//	char tmp = string[0];
//	string[0] = string[len - 1];
//	string[len - 1] = '\0';
//	if(len > 1)
//		reverse_string(string + 1);
//	string[len - 1] = tmp;
//}
//
//int main()
//{
//	char str[] = "abcde";
//	reverse_string(str);
//	printf("%s\n", str);
//
//	return 0;
//}