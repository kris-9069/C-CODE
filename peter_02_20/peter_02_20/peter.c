#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("********1��PLAY    0��EXIT********\n");
	printf("**********************************\n");
}
void game()
{
	int ret=0;
	int guess=0;
	ret=rand()%100+1;
	printf("�������:>");
	while(1)
	{
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("̫����\n");
		}
	    else if(guess<ret)
		{
			printf("̫С��\n");
		}
	    else
		{
			printf("��ϲ��,�¶���\n");
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
		printf("����������:>");
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
				printf("�˳���Ϸ\n");
				break;
			}
		default:
			{
				printf("�������\n");
				break;
			}
		}
	}while(input);
	system("pause");
	return 0;
}
