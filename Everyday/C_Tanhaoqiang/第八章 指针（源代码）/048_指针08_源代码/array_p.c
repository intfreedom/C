#include <stdio.h>

void main048a()
{
      int a[5] = {1, 3, 5, 7, 9};
      int *name[5] = {&a[0], &a[1], &a[2], &a[3], &a[4]};
      int i;

      for( i=0; i < 5; i++ )
      {
            printf("%d   ", *name[i]);
      }
      printf("\n\n");

	  getchar();
}