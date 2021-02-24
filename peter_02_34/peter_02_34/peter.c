#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int int_sort(const void*e1,const void*e2)
{
	return (int*)e1-(int*)e2;
}
void swap(char*bp1,char*bp2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*bp1;
		*bp1=*bp2;
		*bp1=tmp;
		bp1++;
		bp2++;
	}
}
void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0);
			{
				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}
void test1()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),int_sort);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	test1();
	system("pause");
	return 0;
}