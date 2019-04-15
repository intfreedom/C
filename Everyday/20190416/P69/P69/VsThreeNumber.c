#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//≈≈–ÚÀ„∑®
int main()
{

	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	(a < b) ? (a = a^b, b=a^b,a=a^b) : 1;
	(a < c) ? (a = a^c, c=a^c,a=a^c) : 1;
	(b < c) ? (b = b^c, c=b^c,b=b^c) : 1;


	printf("%d£¨%d£¨%d", a, b, c);

	system("pause");

	return 0;
}


