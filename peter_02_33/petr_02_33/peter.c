#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sort_float(const void*e1,const void*e2)
{
	return *((float*)e1)-*((float*)e2);
}
void test1()
{
	float f[]={3.1,1.0,5.3,2.0};
	int sz=sizeof(f)/sizeof(f[0]);
	int i=0;
	qsort(f,sz,sizeof(f[0]),sort_float);
	for(i=0;i<sz;i++)
	{
		printf("%f ",f[i]);
	}
	printf("\n");
}
struct stu
{
	char name[20];
	int age;
};
int sort_name(const void*e1,const void*e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[]={{"peter",21},{"mike",18},{"jony",35}};
	int sz=sizeof(s)/sizeof(s[0]);
	int i=0;
	qsort(s,sz,sizeof(s[0]),sort_name);
	for(i=0;i<sz;i++)
	{
		printf("%s ",s[i].name);
	}
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}