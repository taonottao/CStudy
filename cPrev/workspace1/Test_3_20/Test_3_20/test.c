#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//ֱ�Ӹı�a��ֵ
//	printf("%d\n", a);
//
//	return 0;
//}




//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 15;// 4���ֽڵÿռ�
//	int* pa = &a;//pa����һ��ָ�����
//	int b = 20;
//	//дһ����������������������ֵ
//	//����ǰ
//	printf("a = %d  b = %d\n", a, b);
//	Swap(&a, &b);
//	//������
//	printf("a = %d  b = %d\n", a, b);
//
//	int m = 11;
//	int n = 16;
//	Swap(&m, &n);
//	printf("m = %d  n = %d\n", m, n);
//
//
//	return 0;
//}  



//int Cmp(int x)
//{
//	int flag = 0;
//	for (int i = 2;i <= sqrt(x); i++)
//	{
//		int z = 0;
//		z = x % i;
//		if (z == 0)
//		{
//			flag = 0;
//			break;
//		}
//		else
//			flag = 1;	
//	}
//	/*if(flag == 1)
//		printf("%d������\n", x);
//	else
//		printf("%d��������\n", x);*/  //����������д��������
//	return flag;
//}
//int main()
//{
//	//int a = 153;
//	//Cmp(a);
//	for (int i = 100;i <= 200; i++)
//	{
//		if (Cmp(i) == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}



//���ֲ���
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		} 
	}
	return -1;
}

//int binary_search(int* a, int k)
//{
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("%d", sz);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr)  / sizeof(arr[0]);//���������С
	//���ַ����ҵ��˾ͷ����ҵ���λ���±�
	//�Ҳ�������-1
	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
	//��������ȥ������Ԫ�ص�ַ
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n", ret);
	}

	return 0;
}
