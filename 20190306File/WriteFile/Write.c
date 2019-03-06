#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char ch, filename[20];

	printf("Please input the filename you want to write: \n");
	scanf("%s", filename);

	if( !(fp = fopen(filename, "wt+")))
	{
		printf("Cannot open the file!\n");
		exit(0);
	}

	printf("Please input the sentences you want to write: \n");
	ch = getchar();
	while( ch != EOF ) //ctrl + z
	{
		fputc(ch, fp);
		ch = getchar();
	}

	fclose(fp);
}
