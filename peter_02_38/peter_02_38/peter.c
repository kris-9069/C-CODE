#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10][10]={0};
	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(j==0)
			{
				a[i][j]=1;
			}
			if(i==j)
			{
				a[i][j]=1;
			}
			if(i>=2&&j>=1)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}