#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAXWORD 100
#define NKEYS (sizeof keytab/sizeof(struct key))

struct key {
	char *word;
	int count;
}keytab[] = { "auto",0,"break",0,"case",0,"char",0,"const",0,"continue",0,"default",0 };

int getword(char *, int);
int binsearch(char *, struct key *, int);

/*conut c key words*/
main()
{
	int n;
	char word[MAXWORD];

	while (getword(word, MAXWORD) != EOF)
		if (isalpha(word[0]))//isalphaʶ����ĸ��
			if ((n = binsearch(word,keytab,NKEYS)) >= 0)
				keytab[n].count++;
	for (n = 0; n < NKEYS; n++)
		if (keytab[n].count > 0)
			printf("%4d %s\n", keytab[n].count, keytab[n].word);
	return 0;
}

/*binsearch:find word in tab[0]...tab[n-1]*/
int binsearch(char *word, struct key tab[], int n)
{
	int cond;
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid - 1;
		else if (cond > 0)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
