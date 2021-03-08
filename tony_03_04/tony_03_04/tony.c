#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
char* my_strstr(const char*p1,const char*p2)
{
	char*s1=NULL;
	char*s2=NULL;
	char*cur=NULL;
	assert(p1!=NULL);
	assert(p2!=NULL);
	cur=(char*)p1;
	if(!*p2)
	{
		return (char*)p1;
	}
	while(*cur)
	{
		s1=cur;
		s2=(char*)p2;
		while(*s1&&*s2&&!(*s1-*s2))
		{
			s1++;
			s2++;
		}
		if(!*s2)
		{
			return cur;
		}
		if(!*s1)
		{
			return NULL;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char*p1="abbbcde";
	char*p2="bc";
	char*ret=my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了\n");
		printf("%s",ret);
	}
	system("pause");
	return 0;
}
