#define _CRT_SECURE_NO_WARNINGS 1



//写一个通讯录
// 静态版本
//1. 能存放1000个人的信息
// 每个人信息：
//名字 + 年龄 + 性别 + 电话 + 地址
//2. 增加人的信息
//3. 删除指定人的信息
//4. 修改指定人信息
//5. 查找指定人的信息
//6. 排序通讯录的信息
//

//版本2. 动态版本
//1. 通讯录初始化后能放3个人的信息
//2. 当空间放满后，增加两个信息
//3 +2 + 2 + 2 +....

//版本3
//当通讯录退出时把信息写进文件
//当通讯录初始化的时候，加载文件的信息到通讯录中

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("*****1.add      2.del      ******\n");
	printf("*****3.search   4.modify   ***\n");
	printf("*****5.sort     6.print      *****\n");
	printf("*********0.exit***************\n");
	printf("******************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	////创建通讯录
	//PeoInfo data[MAX];
	////通讯录中有几个元素
	//int sz = 0;
	//给data申请一块在堆区上的空间
	//sz = 0;
	//capacity初始化为当前最大容量
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加
			AddContact(&con);
			break;
		case DEL:
			//删除
			DelContact(&con);
			break;	
		case SEARCH:
			SearchContact(&con);
				break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//保存信息到文件
			SaveContact(&con);	
			//销毁通讯录
			DistoryContact(&con);
			printf("退出\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}