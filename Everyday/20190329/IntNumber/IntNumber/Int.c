#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	/*int a1 = 0101u;
	printf("%u\n", a1);
	short int nummax = SHRT_MAX;
	short int nummin = SHRT_MIN;
	printf("%d\n", sizeof(short int));
	printf("%d, %d\n", sizeof(int), sizeof(long));
	printf("%d, %d\n", nummax, nummin);*/

	int intmax = INT_MAX;
	int intmin = INT_MIN;
	int longmax = LONG_MAX;
	int longmin = LONG_MIN;
	printf("%d, %d\n", intmax, intmin);
	printf("%d, %d\n", longmax, longmin);

	signed int num = 10;//省略signed，默认有符号位；
	unsigned int num1 = 13;

	long long numll = 15029992888;
	printf("%lld\n", numll);

	unsigned long long numull = 413026199908180618;
	unsigned long long nummaxull = ULLONG_MAX;
	printf("%llu\n%llu\n", numull, nummaxull);




	
	
	getchar();
}