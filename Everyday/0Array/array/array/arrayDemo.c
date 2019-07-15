#include<stdio.h>

void main()
{

	char amessage[] = "nw is the time";
	char *pmessage = "now is the time";
	
	printf("%s\n%s\n",amessage,pmessage);
	printf("%s\n%s\n",amessage+1,pmessage+1);

	amessage[1] = 'C';
	*(pmessage + 1) = 'I';//×Ö·ûÖ¸Õë£»

	printf("%s\n%s\n", amessage, pmessage);

	getchar();
}