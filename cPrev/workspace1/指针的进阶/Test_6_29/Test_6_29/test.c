#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int i;//i��ȫ�ֱ�����û�г�ʼ����Ĭ��Ϊ0
//int main()
//{
//	i--;
//	//sizeof�������������Ľ��������unsigned int
//	//�޷����������з������ͽ��бȽ�ʱ���з�������Ҫ��װ�����޷�������
//	if (i > sizeof(i))//-1 > 4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}



//��Sn = a + aa + aaa +aaaa ...
//���磺 Sn = 2 + 22 + 222 + 2222 + ....
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//дһ��������ӡarr��������ݣ���ʹ�������±�	��ʹ��ָ�롣
//arr��һ������һά����
//void print(int* p,int r)
//{
//	int i = 0;
//	for (i = 0; i < r;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	
//	//print(arr, sz);
//
//	return 0;
//}



#include <math.h>
#include <string.h>
//���0-100000֮�������ˮ�ɻ��������
//ˮ�ɻ�����ָһ��nλ�������λ����n�η�֮�����õ��ڸ�������
//�磺153 = 1^3 + 5^3 + 3^3
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		
//		
//		//�ж�i�Ƿ��������
//		//1.����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10 )
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.����i��ÿһλ����n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum +=pow((tmp % 10),n);//pow����ĳ����n�η�
//			tmp = tmp / 10;
//		}
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000;i++)
//	{
//		char a[100001] = { i };
//		int n = strlen(a);
//	}
//}



//дһ����������������һ���ַ���������
//void excge(char a[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
#include <assert.h>
//void excge(char* str, int l)
//{
//	assert(str != NULL);//����
//	char* left = str;
//	char* right = str + l - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--; 
//	}
//}
//int main()
//{
//	char ch[] = "abcde";
//	int len = strlen(ch);
//	excge(ch,len);
//	printf("%s\n", ch);
//	return 0;
//}




//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j< 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	//��
//	//for (i = line - 1; i > 0;i--)
//	//{
//	//	//��ӡһ��
//	//	//�ո�
//	//	int j = 0;
//	//	for (j = 0;j <= line-i-1; j++)
//	//	{
//	//		printf(" ");
//	//	}
//	//	//*
//	//	for (j = 0;j < 2*i-1 ; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - i - 2) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȼ�ƿ�������ʵ�֣�
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if(money > 0)
//		total = 2 * money - 1;
//	/*int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("%d\n", total);
//
//	return 0;
//}




//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿��
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//��ǰ������һ��ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//�Ӻ���ǰ��һ������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);

	return 0;
}