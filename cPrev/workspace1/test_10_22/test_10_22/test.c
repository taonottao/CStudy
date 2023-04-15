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


//计算n的阶乘
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

//计算1! + 2! +3！ + 4！+ 5! + ... +10!
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
//	//优化
//	for (n = 1; n < 4; n++)
//	{
//		ret *= n;
//		sum += ret;  //原理是 n！=n*（n-1）！
//	}
//		
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//	int k = 7;//要查找的数
//	//在arr这个有序数组中查找k的值
//	int sz = sizeof(arr) / (sizeof(arr[0]));//数组的元素个数
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
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
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
//		Sleep(1000);//睡眠1000ms
//		system("cls");//清空屏幕
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
//	//假设正确的密码是字符串"123456"
//	char  password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入你的密码：");
//		scanf("%s", password);//数组名本来就是一个地址
//		//if (password == "123456")//err-两个字符串的比较，不能使用==，应该使用strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入\n");
//	}
//	if (i == 3)
//	{
//		printf("三次输入错误，退出登录\n");
//	}
//
//	return 0;
//}


//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//  a.猜对了，恭喜你，游戏结束
//  b.猜错了，会告诉你，猜的大了还是小了，继续猜，直到猜对为止
//3.游戏可以一直玩，除非退出游戏
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
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767之间的数字
	//时间-时间戳
	
	int ret = rand()%100 + 1;//%100的余数是0-99，+1变成1-100
	//printf("%d\n", ret);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请输入一个数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		menu();//打印一个菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("猜数字\n");
			game();
			break;		
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (input);
	return 0;
}