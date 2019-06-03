#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
      void  exchange(int *q1, int *q2, int *q3);

      int a, b, c, *p1, *p2, *p3;

      scanf("%d %d %d", &a, &b, &c);
      p1 = &a;
      p2 = &b; 
      p3 = &c;

      exchange(p1, p2, p3);  //确保a > b > c
      printf("%d %d %d\n", a, b, c);
}


void  exchange(int *q1, int *q2, int *q3) //int *q1 = p1;
{
      void swap1(int *pt1, int *pt2); //用于交换&……&%

      if( *q1 < *q2 )
      {
            swap1(q1, q2);
      }
      if( *q1 < *q3 )
      {
            swap1(q1, q3);
      }
      if( *q2 < *q3 )
      {
            swap1(q2, q3);
      }
}
 
void  swap1(int *pt1, int *pt2)
{
      int temp;

      temp = *pt1;
      *pt1 = *pt2;
      *pt2 = temp;
}