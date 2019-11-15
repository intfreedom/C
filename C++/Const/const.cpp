#include <stdio.h>
//using namespace std;

int main()
{
	const char *s1 = "hello world";

	char s2[] = "hello world";

	printf("%p %p\n", s1,s2);

	s2[0] = 'B';


	return 0;
}
