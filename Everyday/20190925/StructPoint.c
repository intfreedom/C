#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Teacher
{
	char *name;
	//char name[50];
	int age;
}Teacher;

int main(void)
{
#if 0
	char *name = NULL;
	name = (char*)malloc(30);
	strcpy(name,"lily");
	printf("name = %s\n",name);

	if(name != NULL)
	{
		free(name);
		name = NULL;
	}
#endif

	Teacher t;
	t.name = (char*)malloc(30);
	strcpy(t.name,"lily");
	t.age = 22;
	printf("name = %s,age = %d\n",t.name,t.age);

	if(t.name != NULL)
	{
		free(t.name);
		t.name = NULL;
	}

#if 0
	Teacher *p = NULL;
	strcpy(p->name,"lily");

	Teacher *q = NULL;

#endif

	printf("\n");
	return 0;
}
