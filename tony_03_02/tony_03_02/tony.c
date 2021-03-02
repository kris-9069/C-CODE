#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
void reverse(char*left,char*right)
{
	assert(left!=NULL);
	assert(right!=NULL);
	while(left<right)
	{
		char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
void left_turn(char arr[],int k)
{
	int len=strlen(arr);
	assert(arr!=NULL);
	assert(k<=len&&k>0);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
int main()
{
	char arr[]="abcdefg";
	int k=0;
	printf("请输入左旋字符个数:>");
	scanf("%d",&k);
	left_turn(arr,k);
	printf("%s",arr);
	system("pause");
	return 0;
}
