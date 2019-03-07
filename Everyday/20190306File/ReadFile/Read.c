#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch, filename[20];

	printf("Please input the filename you want to open\n");
	scanf("%s",filename);//for example 123.txt

	if(!(fp = fopen(filename, "r")))
	{
		printf("Cannot open the file!\n");
		exit(0);
	}

	while(ch!=EOF)
	{
		ch = fgetc(fp);
		putchar(ch);
	}

	fclose(fp);
}

