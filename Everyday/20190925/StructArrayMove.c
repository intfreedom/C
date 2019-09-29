#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Teacher
{
	char name[50];
	int age;
}Teacher;

int main(void)
{
	int b[3] = {0};
	int *pB = (int*)malloc(3*sizeof(int));
	free(pB);

	Teacher *p = (Teacher *)malloc(3*sizeof(Teacher));
	if(p == NULL)
	{
		return -1;
	}

	char buf[50];
	for(int i = 0; i < 3; i++)
	{
		sprintf(buf,"name%d%d%d",i,i,i);
		strcpy(p[i].name,buf);
		p[i].age = 20 + i;
	}

	for(int i = 0; i < 3; i++)
	{
		printf("%d:  %s, %d\n", i+1, p[i].name, p[i].age);

	}
	printf("\n");


	if(p!=NULL)
	{
		free(p);
		p = NULL;
	}

	printf("\n");
	return 0;
}


