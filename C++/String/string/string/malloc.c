#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int *pi = 0;
	pi = malloc(sizeof(int));
	printf("%p\n", pi);

	*pi = 100;

	printf("%d\n", *pi);

	

	char *pc = 'a';
	pc = malloc(sizeof(char));
	printf("%p\n", pc);

	strcpy(pc, "I love you");
	printf("pc=%c\n",*pc);
	free(pc);
	free(pi);

	getchar();
}