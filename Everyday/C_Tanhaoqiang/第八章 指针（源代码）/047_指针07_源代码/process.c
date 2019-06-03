/***********************************************************/
/*  ��һ������process���ڵ�������ʱ��ÿ��ʵ�ֲ�ͬ�Ĺ��ܡ�*/
/*  �����ͣ�����������һ�ε���processʱ�ҳ���ͣ��д��ߣ�*/
/*  �ڶ����ҳ�����С�ߣ�������������֮�͡�               */
/***********************************************************/

#include <stdio.h>

void main()
{
      int max(int, int);            /* �������� */
      int min(int, int);            /* �������� */
      int add(int, int);            /* �������� */
    
      void process( int, int, int(*fun)() );    /* �������� */
      
      int a, b;

      printf("Endter a and b: ");
      scanf("%d %d", &a, &b);
      
      printf("max = ");
      process(a, b, max);

      printf("min = ");
      process(a, b, min);

      printf("sum = ");
      process(a, b, add);
}

int max(int x, int y)              /* �������� */
{
      int z;
      
      if( x > y )
      {
            z = x;
      }
      else
      {
            z = y;
      }

      return z;
}

int min(int x, int y)              /* �������� */
{
      int z;

      if( x < y )
      {
            z = x;
      }
      else
      {
            z = y;
      }

      return z;
}

int add(int x, int y)
{
      int z;
      
      z = x + y;
      return z;
}

void process( int x, int y, int(*fun)() )    /* �������� */ 
{
      int result;

      result = (*fun)(x, y);
      printf("%d\n", result);
}
