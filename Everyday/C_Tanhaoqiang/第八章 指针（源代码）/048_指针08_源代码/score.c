#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main048s()
{
      double score[][4] = {{60.0, 70.0, 80.5, 90.5}, {56.0, 89.0, 67.0, 88.0}, {34.2, 78.5, 90.5, 66.0}};
      double *search(double(*pointer)[4], int n);
      double *p;
      int i, m;

      printf("Please enter the number of student: ");
      scanf("%d", &m);

      printf("The scores of No.%d are: \n", m);

      p = search(score, m);

      for( i=0; i < 4; i++)
      {
            printf("%5.2f\t", *(p + i));
      }

      printf("\n\n\n");

	  getchar();
	  getchar();
}

double *search(double (*pointer)[4], int n)
{
      double *pt;

      pt = *(pointer + n-1);

      return pt;
}