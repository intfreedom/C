#include <stdio.h>

void reverse(int x[],int n);   /*形参x是数组名*/

void main()
{
      int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

      printf("The original array:\n");

      for( i=0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\n");

      reverse(a, 10);  //作用使得数组重新倒序排放

      printf("The array has been inverted:\n");

      for( i=0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\n");

}

void reverse(int x[], int n)   /*形参x是数组名*/
{
      int temp, i, j, m;

      m = (n-1)/2;    
      
      for( i=0; i <= m; i++)
      {
            j = n-1-i;  //j指向对应的元素

            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
      }
   
}

