#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int num=0,ret=0,i=0;
	scanf("%d",&num);
	ret=sizeof(arr)/sizeof(arr[0])-1;
	for(i=0;i<=ret;i++)
	{
		if(num==arr[i])
		{
			printf("�������ֵ��±�Ϊ��%d\n",i);
		    break;	
		}
	}
	if(i>ret)
		{
			printf("������������������\n");
		}
	return 0;
}