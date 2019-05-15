#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


#if(1)
void main()
{
	int maxnumber(int, int);
	int a, b, c;
	scanf("%d %d",&a,&b);
	c = maxnumber(a, b);
	printf("the max number is£º%d\n", c);

	system("pause");
}
#endif
int maxnumber(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;

}


void main3()
{
	char *a = "I really like programming";
	int i;

	printf("The sixth character is:\n%c\n\n",a[5]);

	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c",a[i]);
	}

	printf("\n");

	system("pause");
}

void main2()
{
	char *a = "I really love programming!";
	printf("String a is: %s\n",a);
	a += 7;
	printf("String a+7 is: %s\n",a);
	system("pause");
}
void main1()
{
	void copy_string(char *from, char *to);

	char *a = "I love code!";
	char b[] = "You may not love, but must insist!";

	printf("String a is: %s\nString b is: %s\n",a,b);
	printf("Copy string a to string b: \n");

	copy_string(a, b);
	printf("String a is: %s\nString b is: %s\n", a, b);

	system("pause");

}

void copy_string(char from[], char to[])
{
	char *p1, *p2;

	p1 = from;
	p2 = to;

	while ((*p2++ = *p1++) != '\0')
	{
		;
	}
}


void copy_string2(char *from, char *to)
{
	while ((*to = *from) != '\0')
	{
		to++;
		from++;
	}
}

void copy_string1(char *from, char *to) 
{
	while ((*to++ = *from++) != '\0');
}