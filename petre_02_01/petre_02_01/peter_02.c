#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n=0,ret=1,sum=0,i;
	scanf("%d",&i);
	for(n=1 ;n<=i; n++)
	{
		ret=ret*n;
		sum=sum+ret;
	}
	printf("sum=%d\n",sum);
	return 0;
}
