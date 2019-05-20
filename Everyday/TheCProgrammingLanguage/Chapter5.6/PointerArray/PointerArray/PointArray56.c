#include<stdio.h>
#include<stdlib.h>

#define MAXLINES 5000 /*max #lines to be sorted*/

char *lineptr[MAXLINES];/*pointers to text lines*/

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/*sort input lines*/
main()
{
	int nlines;
	
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	}
	else
	{
		printf("error: input too big to sort\n");
		return 1;
	}
}

/*qsort: sort v=[left]...v[right] into incrasing order*/
void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int left, int right);

	if (left >= right)
			return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);

}

