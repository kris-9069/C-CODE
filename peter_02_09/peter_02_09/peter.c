#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i=0,n=0,count=0;
	for(i=101;i<200;i+=2)
	{
	    for(n=2;n<=sqrt(i);n++)
		{
			if(i%n==0)
				goto again;

		}
		printf("%d ",i);
		count++;
		again:;
	}
	printf("\ncount=%d\n",count);
	return 0;
}

