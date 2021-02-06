#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i=0,count=0;
	for(i=1;i<=100;i++)
	{
		if(i/10==9)
		{
			printf("%d ",i);
			count++;
		}
		if(i%10==9)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("count=%d\n",count);
	return 0;
}
