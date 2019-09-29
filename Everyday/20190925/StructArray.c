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
	Teacher a[3] = {
		{"a",18},
		{"a",18},
		{"a",18}
	};

	Teacher a2[3] = {"a",18,"b",28,"c",38};

	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%s, %d\n",a[i].name,a[i].age);
	}
	for(i=0;i<3;i++)
	{
		printf("%s, %d\n",a2[i].name,a2[i].age);
	}
	printf("\n");
	return 0;
}
