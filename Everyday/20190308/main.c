#include <stdio.h>

void main()
{
	int a[100] = {630, 2131, 2505, 600157, 600139, 601326, 300043, 600020, 2610, 300255, 603011, 300291, 600293, 633, 601598, 2477, 600552, 2519};
	int i;
	int b[20] = {1, 1};

	for(i = 2; i < 20; i++)
	{
		b[i] = b[i-2] + b[i-1];
	}
	for(i=0; i < 20; i++)
	{
		if(i%5 == 0)
		{
			printf("\n");
		}
		printf("%12d", b[i]);
	}
	printf("\n");

}


