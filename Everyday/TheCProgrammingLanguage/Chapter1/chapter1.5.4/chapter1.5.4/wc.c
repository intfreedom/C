#include<stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/
/*count lines, words, and characters in input*/
//main1()
//{
//	int c, nl, nw, nc, state;
//
//	state = OUT;
//	nl = nw = nc = 0;
//	while ((c = getchar()) != EOF)
//	{
//		++nc;
//		if (c == '\n')
//			++nl;
//		if (c == ' ' || c == '\n' || c = '\t')//为何同样的在另一行不报错；这里报错的原因可能是||用了中文输入法
//			state = OUT;
//		else if (state == OUT)
//		{
//			state = IN;
//			++nw;
//		}
//	}
//	printf("%d %d %d\n",nl,nw,nc);
//}

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' '||c=='\n'||c=='\t')//为何同样的在另一行不报错；
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);

}

main2()
{
	int x, y, z;
	x = 1;
	y = 2;
	z = 3;
	while (x < z+1)
	{
		if (x < y)
			printf("x<y\n");
		if (x < z)
			printf("x<z\n");
		else if (y < z)//当所有if不成立时才会执行到else;
		{
			printf("y<z\n");
		}
		++x;

	}

	system("pause");
}

