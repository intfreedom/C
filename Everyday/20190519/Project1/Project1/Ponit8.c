#include<stdio.h>

void main(int argc, char *argv[])
{
	while (argc > 1)
	{
		argv++;
		printf("%s\n",argv);
		--argc;
	}
	system("pause");
}

void main1()
{
	char *name[] = { "a","z","c" };
	char **p;
	int i;

	for (i = 0; i < 3; i++)
	{
		p = name + i;
		printf("%s\n",*p);
	}
	system("pause");
}