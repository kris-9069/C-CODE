#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i=0,s=1;
	float ret=0,sum=0;
	for(i=1;i<=100;i++)
	{
		ret=s*(1.0)/i;
		sum=sum+ret;
		s=-s;
	}
	printf("sum=%f\n",sum);
	system("pause");
	return 0;
}
