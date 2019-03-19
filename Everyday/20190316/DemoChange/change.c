#include<stdio.h>

//int auto(char s[]);

int auto(char s[])
{
	int i, n;
	n = 0;
	for(i=0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = n*10 + (s[i] - '0');
	return n;
}

int main()
{
	printf("%d", auto('12345'));
}
