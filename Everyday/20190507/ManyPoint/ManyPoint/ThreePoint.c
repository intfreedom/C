#include<stdio.h>
#include<stdlib.h>

void main()
{

	int a[3][4] = { {1,2,3,8},{4,5,6,8},{7,8,9,8} };
	printf("%0x\n",a[0]);
	printf("%0x\n",a);
	printf("%0x\n",*a);
	printf("%0x\n",&a);
	printf("%0x\n",a[1]);
	printf("%0x\n",a+1);
	printf("%0x\n",*(a+1));
	printf("%0x\n",&a+1);
	printf("%d\n",a[0][0]);

	system("pause");

}