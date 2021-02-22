#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("******************************\n");
	printf("*****1、Add        2、Sub*****\n");
	printf("*****3、Mul        4、Div*****\n");
	printf("***********0、Exit************\n");
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int main()
{
	int input=0;
	int x=0,y=0;
	int ret=0;
	int(*pArr[])(int,int)={0,Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d",&input);
		if(input>=1&&input<=4)
		{
			printf("请输入两个数:> ");
			scanf("%d%d",&x,&y);
			ret=pArr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	}while(input);
	system("pause");
	return 0;
}