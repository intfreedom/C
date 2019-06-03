#include <stdio.h>

void  main ( )
{
      int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
      int (*p)[4], i, j;
   
      p = a;
      
      printf("i = ");
      scanf("%d", &i);
      while( i > 2 || i < 0 )
      {
            printf("i = ");
            scanf("%d", &i);
      }
      printf("j = ");
      scanf("%d", &j);
      while( j > 3 || i < 0 )
      {
            printf("j = ");
            scanf("%d", &j);
      }

      printf("a[%d, %d] = %d\n", i, j, *(*(p+i)+j));

}
