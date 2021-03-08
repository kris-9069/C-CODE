#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
void*my_memcpy(void*dest,const void*src,size_t num)
{
	void*ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	while(num--)
	{
		*(char*)dest=*(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[5]={0};
	int i=0;
	int num=sizeof(arr1)/sizeof(arr1[1]);
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}