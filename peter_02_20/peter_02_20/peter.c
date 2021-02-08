#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("********1、PLAY    0、EXIT********\n");
	printf("**********************************\n");
}
void game()
{
	int ret=0;
	int guess=0;
	ret=rand()%100+1;
	printf("请猜数字:>");
	while(1)
	{
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("太大了\n");
		}
	    else if(guess<ret)
		{
			printf("太小了\n");
		}
	    else
		{
			printf("恭喜你,猜对了\n");
		    break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			{
				game();
				break;
			}
		case 0:
			{
				printf("退出游戏\n");
				break;
			}
		default:
			{
				printf("输入错误\n");
				break;
			}
		}
	}while(input);
	system("pause");
	return 0;
}
