#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int find_number(int arr[],int k,int sz)
{
	int left=0;
	int right=sz;
	int mid=0;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<k)
	{
		left=mid+1;
	}
	else if(arr[mid]>k)
	{
		right=mid-1;
	}
	else
	{
		return mid;
	}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=0;
	int sz=sizeof(arr)/sizeof(arr[0])-1;
	int ret=0;
	printf("请输入想要查找的数:");
	scanf("%d",&k);
	ret=find_number(arr,k,sz);
	if(ret==-1)
	{
		printf("查无此数\n");
	}
	else
	{
		printf("找到了，该数字的下标是%d\n",ret);
	}
	system("pause");
	return 0;
}
