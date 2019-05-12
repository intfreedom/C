#include<stdio.h>

void main1()
{

	char *string = "I love China!";
	printf("%s\n", string);
	//刚才数字名，最后有数字出现错误；
	char stringone[] = "I love myself";
 	printf("%s\n",stringone);
	system("pause");
}


void main2()
{
	char a[] = "I love money, I love girl!!!";
	char b[40];

	int i;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		*(b + i) = *(a + i);
	}

	printf("String a is:  %s\n",a);
	printf("String b is: ");
	for (i = 0; *(b + i); i++)
	{
		printf("%c",b[i]);
	}
	printf("\n\n");


	system("pause");
}

void main()
{
	char a[] = "this is must insist", b[40], *p1, *p2;
	int i;

	p1 = a;
	p2 = b;

	for (; *p1 != '\0'; p1++, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("String a is:  %s\n", a);
	printf("String b is: ");
	for (i = 0; b[i] != '\0'; i++)
	{
		printf("%c", b[i]);
	}
	printf("\n\n");



	system("pause");
}