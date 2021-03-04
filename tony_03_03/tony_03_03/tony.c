#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Findnum(int arr[4][4],int k,int*px,int*py)
{
	int x=0;
	int y=*py-1;
	while(x<=(*px-1)&&(y>=0))
	{
		if(arr[x][y]>k)
		{
			y--;
		}
		else if(arr[x][y]<k)
		{
			x++;
		}
		else
		{
			*px=x;
			*py=y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int k=8;
	int x=4,y=4;
	int ret=Findnum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标为:>%d %d\n",x,y);
	}
	else 
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}