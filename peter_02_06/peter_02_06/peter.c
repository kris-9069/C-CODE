#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i=0,count=0;;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n%d\n",count);
	return 0;
}
