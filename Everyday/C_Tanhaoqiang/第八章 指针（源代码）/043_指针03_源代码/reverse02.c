#include <stdio.h>

void reserve(int *x, int n);   /*形参x为指针变量*/

void main()
{
      int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

      printf("The original array:\n");

      for( i=0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\n");

      reserve(a, 10);

      printf("The array has benn inverted:\n");

      for( i=0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
      printf("\n");
}

void reserve(int *x, int n)   /*形参x为指针变量*/
{
      int *p, temp, *i, *j, m;

      m = (n-1)/2;
      i = x;         //i指向数组的第一个元素
      j = x-1+n;     //j指向的是数组的最后一个元素
      p = x+m;       //指向中间，配对……
      
      for( ; i <= p; i++, j--)
      {
            temp = *i;
            *i = *j;
            *j = temp;
      }
}
