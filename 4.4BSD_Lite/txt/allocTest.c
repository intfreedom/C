#include<stdio.h>
#include<string.h>

#define MAXLINES 5000	/* max #lines to be sorted */

#define ALLOCSIZE 1000 /* size of available space */

static char allocbuf[ALLOCSIZE];	/* storage for alloc */
static char* allocp = allocbuf;		/* next free position */

char* alloc(int n)	/* return pointer to n characters */
{
	if (allocbuf + ALLOCSIZE - allocp >= n) {	/* it  fits */
		allocp += n;
		return allocp - n;	/* old p */
	}
	else	/* not enough room */
		return 0;
}

void afree(char* p)		/* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOSIZE)
		allocp = p;
}

char* lineptr[MAXLINES];	/* pointers to text lines */

int readlines(char* lineptr[], int nlines);
void writelines(char* lineptr[], int nlines);

void qsort(char* lineptr[], int left, int right);

/* sort input lines */
main()
{
	int k;
	for()
}

#define MAXLEN 1000	/* max length of any input line */
int getline(char*, int);
char* alloc(int);
/* readlines:read input lines */
int readlines(char* lineptr[], int maxlines)
{
	int len, nlines;
	char* p, line[MAXLEN];

	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
		if (nlines >= maxlines || p = alloc(len) == NULL)
			return -1;
		else {
			line[len - 1] = '\0';/* delete newline */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

/* writelines:write output lines */
void writelines(char* lineptr[], int nlines)
{
	int i;
	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}

/* swap:interchange v[i] and v[j] */
void swap(char* v[], int i, int j)
{
	char* temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

/*  qsort:sort v[left]...v[right] into increasing order */
void qsort(char* v[], int left, int right)
{
	int i, last;
	void swap(char* v[], int i, int j);
	if (left >= right)	/* do nothing if array contains */
		return;			/* fewer than two elements */
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}