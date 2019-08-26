#include<stdio.h>

int main(int argc, char* argv[])
{
	if (argc < 2)
		printf("Just .exe!!!");
	else
		for (int i = 0; i < argc; i++)
		{
			printf("argv[%d]=%s\n",i,argv[i]);
		}

	getchar();

}