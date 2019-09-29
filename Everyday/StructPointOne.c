#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Teacher
{
	char *name;
	int age;
}Teacher;

void showTeacher(Teacher *p, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s, %d\n",p[i].name,p[i].age);
	}
}

void freeTeacher(Teacher *p, int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		if(p[i].name != NULL)
		{
			free(p[i].name);
			p[i].name = NULL;
		}
	}


	if(p!=NULL)
	{
		free(p);
		p=NULL;
	}
}

Teacher *getMem(int n)
{
	Teacher *p = (Teacher *)malloc(sizeof(Teacher)*3);
	int i = 0;
	char buf[30];
	for(i=0;i<n;i++)
	{
		p[i].name = (char*)malloc(30);
		sprintf(buf,"name%d%d%d",i,i,i);
		strcpy(p[i].name,buf);

		p[i].age = 20+2*i;
	}

	return p;
}

int main(void)
{
	Teacher *p = NULL;

	p = getMem(3);

	showTeacher(p,3);
	freeTeacher(p,3);
	p = NULL;

	return 0;
}
