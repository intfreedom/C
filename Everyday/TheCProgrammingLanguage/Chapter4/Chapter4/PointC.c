#include<stdio.h>
#define MAXLINE 1000  /*maximum input line length*/

int getline(char line[], int max);
int strindex(char source[],char searchfor[]);

char pattern[] = "ould";


main()
{
	char line[MAXLINE];
	int found = 0;
	while(getline(line,MAXLINE)>0)
		if (strindex(line, pattern) >= 0)
		{
			printf("%s",line);
			found++;
		}
	return found;
}

/*getline: get line into s, return length*/
int getline(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/*strindex:return index of t in s, -1 if none*/
int strindex(char s[], char t[])
{
	int i, j, k;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}

void main5()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		printf("%d\n", nl);
	}
}

void main3()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		printf("\n");
	}
	system("pause");
}

void main2()
{
	int c;
	printf("1");
	c = getchar();
	printf("2");
	int lim = 3;
	int i = 0;
	while (i++ < lim && c != EOF)
	{
		printf("&");
		putchar(c);
		printf("*");
		c = getchar();//去掉这一句就会循环打印；
	}
	/*printf("hello, ");
	printf("world");
	printf("\n");*/
	/*int c = getchar();
	printf("%d\n",c);
	printf("%s\n",c);*/
	system("pause");
}
