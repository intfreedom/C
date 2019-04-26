#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{

	int num = 1;
	scanf("%d", &num);

//	char f1='A';
//	enum week{X, Y, Z};
//	enum week week1=X;
//
//	int data=2;
	switch(num)
	{
		case 1:
			printf("\n 10");
			break;
		case 2:
			printf("\n 100");
			if(num>0)
			{
				printf("QianTao");
			}
			else if(num>1)
			{
				printf("is handle variable in swtich");
			}
			break;
		case 3:
			printf("\n 1000");

		default:
			printf("\n OK");
	}
}
