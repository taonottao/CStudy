#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//����n�Ľ׳�
//int main()
//{
//	int z = 1;
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (i <= n )
//	{
//		z = z * i;
//		i++;
//	}
//	printf("%d\n", z);
//
//
//	return 0;
//}

//����1! + 2! +3�� + 4��+ 5! + ... +10!
//int main()
//{
//	int n = 1;
//	int j = 1;
//	int ret = 1;
//	int sum = 0;
//	
//	//for (n = 1; n < 4; n++)
//	//{
//	//	ret = 1;
//	//	for (j = 1; j <= n; j++)
//	//	{
//	//		ret *= j;
//	//	}
//	//	sum += ret;
//	//}
//	//�Ż�
//	for (n = 1; n < 4; n++)
//	{
//		ret *= n;
//		sum += ret;  //ԭ���� n��=n*��n-1����
//	}
//		
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//	int k = 7;//Ҫ���ҵ���
//	//��arr������������в���k��ֵ
//	int sz = sizeof(arr) / (sizeof(arr[0]));//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}



//welcome to 4309!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//....
//welcome to 4309!!!!!
#include <string.h>
#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to 4309!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1000ms
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//	char  password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("������������룺");
//		scanf("%s", password);//��������������һ����ַ
//		//if (password == "123456")//err-�����ַ����ıȽϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�����������������\n");
//	}
//	if (i == 3)
//	{
//		printf("������������˳���¼\n");
//	}
//
//	return 0;
//}


//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//  a.�¶��ˣ���ϲ�㣬��Ϸ����
//  b.�´��ˣ�������㣬�µĴ��˻���С�ˣ������£�ֱ���¶�Ϊֹ
//3.��Ϸ����һֱ�棬�����˳���Ϸ
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*************************\n");
	printf("****** 1.play   *********\n");
	printf("****** 0.exit   *********\n");
	printf("*************************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ��-ʱ���
	
	int ret = rand()%100 + 1;//%100��������0-99��+1���1-100
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("������һ�����֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡһ���˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("������\n");
			game();
			break;		
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺");
			break;
		}
	} while (input);
	return 0;
}