#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("***********************************\n");
	printf("*********1��PLAY  2��EXIT**********\n");
	printf("***********************************\n");
}
void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);
	SetMine(mine,ROW,COL);
	Find_Mine(mine,show,ROW,COL);
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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
		default :
			{
				printf("ѡ���������������");
				break;
			}
		}
	}while(input);

}
int main()
{
	test();
	return 0;
}