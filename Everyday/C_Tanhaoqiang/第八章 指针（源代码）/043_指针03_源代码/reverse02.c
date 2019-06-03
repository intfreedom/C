#include <stdio.h>

void reserve(int *x, int n);   /*�β�xΪָ�����*/

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

void reserve(int *x, int n)   /*�β�xΪָ�����*/
{
      int *p, temp, *i, *j, m;

      m = (n-1)/2;
      i = x;         //iָ������ĵ�һ��Ԫ��
      j = x-1+n;     //jָ�������������һ��Ԫ��
      p = x+m;       //ָ���м䣬��ԡ���
      
      for( ; i <= p; i++, j--)
      {
            temp = *i;
            *i = *j;
            *j = temp;
      }
}
