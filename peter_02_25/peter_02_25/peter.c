#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void find_num(int n)
{
	int i=0;
	printf("ż��λ:");
	for(i=31;i>=0;i-=2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n");
	printf("����λ:");
	for(i=30;i>=0;i-=2)
	{
		printf("%d ",(n>>i)&1);
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	find_num(n);
	return 0;
}