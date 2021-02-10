#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i=0,j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0,j=0;
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS],int row,int col)
{
	int x=0,y=0;
	int count=Mine_count;
	while(count)
	{
		x=rand()%row+1;
		y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
int There_Minecount(char board[ROWS][COLS],int x,int y)
{
	return board[x-1][y]+board[x-1][y-1]+
		board[x][y-1]+board[x+1][y-1]+
		board[x+1][y]+board[x+1][y+1]+
		board[x][y+1]+board[x-1][y+1]-8*'0';
}
void Find_Mine(char board1[ROWS][COLS],char board2[ROWS][COLS],int row,int col)
{
	int x=0,y=0;
	int ret=0;
	int count=0;
	while(ret<row*col-Mine_count)
	{
		printf("请输入想要排雷的坐标:>");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board1[x][y]=='1')
			{
				printf("对不起，你踩雷了\n");
				DisplayBoard(board1,ROW,COL);
				break;
			}
			else
			{
				count=There_Minecount(board1,x,y);
				board2[x][y]=count+'0';
				DisplayBoard(board2,ROW,COL);
				ret++;
			}
		}
		else
		{
			printf("输入坐标超出范围，请重新输入");
		}
	}
	if(ret==row*col-Mine_count)
	{
		printf("恭喜你，扫雷成功\n");
		DisplayBoard(board1,ROW,COL);
	}
}