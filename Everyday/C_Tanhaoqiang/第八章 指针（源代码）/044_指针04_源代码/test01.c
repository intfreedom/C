#include <stdio.h>

void sort(int x[], int n);

void main()
{
      int *p, i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
      
      printf("The original array:\n");
      
      for( i=0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
      
      
      printf("\n");
      
      p = a;
      sort( p, 10 );
   
      printf("The result is:\n");

      for( p=a,i=0; i < 10; i++ )         
      {
            printf("%d ", *p);
            p++;
      }
      printf("\n");

	  getchar();
      
}

void sort(int x[], int n)
{
      int i, j, k, t;

      for( i=0; i < n-1; i++)
      {
            k = i;

            for( j=i+1; j < n; j++ )
            {
                  if( x[j] > x[k] )     
                  {
                        t = x[j];
                        x[j] = x[k];
                        x[k] = t;
                  }
            }
      }
}



