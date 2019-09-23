#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Teacher
{
	char name[50];
	int age;
}t1,t2;

typedef struct Teacher3
{
	char name[50];
	int age;
}Teacher3;

struct Teacher3 t8;

int main(void)
{
	struct Teacher t1 = {"lily",18};
	printf("%s, %d\n",t1.name,t1.age);
	printf("\n");

	strcpy(t2.name,"xiaoming");
	t2.age = 22;
	printf("%s, %d\n",t2.name,t2.age);


	//pointer no space, can't give value;
	struct Teacher *p = NULL;
	p = &t1;
	strcpy(p->name,"jams");
	p->age = 33;
	printf("%s, %d\n",p->name,p->age);
	return 0;
}
