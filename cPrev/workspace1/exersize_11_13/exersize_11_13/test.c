#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char arr[50] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("�������ַ�����");
//	scanf("%s", arr);
//	while (i <= strlen(arr))
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			j++;
//			
//		}
//		i++;
//	}
//	
//	printf("Сд��ĸ�ĸ���Ϊ��%d\n", j);
//
//	return 0;
//}


int main()
{
	int arr[100] = { 0 };
	int i = 0;
	printf("������x��������x<=100)��");
	scanf("%d", arr);
	printf("%d ", arr);
	int min = arr[0];
	for (i = 1;i <= strlen(arr);i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			arr[i] = arr[0];
		}
	
	}
	arr[0] = min;
	printf("%d ", arr);


	return 0;
}