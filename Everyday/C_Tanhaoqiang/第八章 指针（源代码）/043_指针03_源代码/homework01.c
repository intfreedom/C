#include <stdio.h>

int max, min;      /*ȫ�ֱ���*/

void max_min_value(int array[], int n);

void main()
{
      int i, number[10];

      printf("enter 10 integer umbers:\n");

      for( i=0; i < 10; i++)
      {
            scanf("%d", &number[i]);
      }

      max_min_value(number, 10);

      printf("\nmax=%d, min=%d\n", max, min);

}

void max_min_value(int array[], int n)
{
      int *p, *array_end;
      
      array_end = array + n;
      
      max = min = *array;
      
      for( p=array+1; p < array_end; p++)
      {
            if( *p > max )
            {
                  max = *p;
            }
            else if( *p < min ) 
            {
                  min = *p;
            }     
      }
}