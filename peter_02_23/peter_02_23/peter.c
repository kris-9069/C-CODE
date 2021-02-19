#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=15;
	int i=0;
	int count=0;
	for(i=0;i<32;i++)
	{
		if(((a>>i)&1)==1)
			count++;
	}
	printf("二进制中1的个数=%d\n",count);
	system("pause");
	return 0;
}
