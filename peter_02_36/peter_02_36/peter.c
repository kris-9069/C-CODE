#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i=0;
	for(i=1;i<=100000;i++)
	{
		int ret=1;
		int sum=0;
		int tmp=i;
		while(tmp/=10)
		{
			ret++;
		}
		tmp=i;
		while(tmp>0)
		{
			sum=sum+pow((float)(tmp%10),ret);
			tmp=tmp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	system("pause");
	return 0;
}