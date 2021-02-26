#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int line=0;
	int i=0;
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		int j=0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<line-1;i++)
	{
		int j=0;
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(line-1-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}