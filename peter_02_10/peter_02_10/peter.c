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
	printf("��������Ҫ���ҵ���:");
	scanf("%d",&k);
	ret=find_number(arr,k,sz);
	if(ret==-1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("�ҵ��ˣ������ֵ��±���%d\n",ret);
	}
	system("pause");
	return 0;
}
