#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,n=0,sum=0;
	int i=0;
	int ret=0;
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++)
	{
		ret=10*ret+a;
		sum=sum+ret;
	}
	printf("sum=%d\n",sum);
	system("pause");
	return 0;
}