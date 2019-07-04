#include<stdio.h>
#include<stdlib.h>

void main()
{
	enum week {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
	/*from left to right, from 0 start,enum only can be int, not float*/
	enum week week5 = Friday;
	if (Friday == week5)
	{
		printf("%d\n",week5);
	}

	if (week5 == 4)
	{
		printf("%d\n",Friday);
	}
	getchar();

}