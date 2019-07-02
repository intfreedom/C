#include<stdio.h>
#include<stdbool.h>

void main()
{
	/*true change to 10,the results is same,not zero is true;
	but, the results is one or zero;not matter what the values is
	*/
	_Bool bl = true;
	_Bool bint = 10;
	printf("%d\n",bint);
	printf("%d\n",sizeof(bl));

	bl ? printf("Yes,I try!!!\n") : printf("No,you can not give up!!!\n");
	!bl ? printf("Yes,I try!!!\n") : printf("No,you can not give up!!!\n");

	system("pause");
}