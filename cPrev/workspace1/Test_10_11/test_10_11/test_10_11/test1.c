#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//����
	int arr[10] = {0};

	//����
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	//�����ֵ
	int max = arr[0];//��������ĵ�һ��Ԫ�ؾ������ֵ
	//��ʣ�µ�Ԫ�غ�max�Ƚϣ���max�������max
	for (i = 1;i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//���
	printf("max=%d\n", max);
	return 0;
}

//��10������ƽ��ֵ
//int main()  
//{
//	/*int arr[10];
//	int i;
//	int sum = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	int average;
//	average = sum / 10;
//	printf("ƽ����=%d\n", average);*/
//	int a = 0;
//	int i = 0;
//	for ( i = 0;i < 10;i++)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}