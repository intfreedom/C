/***********************************************************/
/*  设一个函数process，在调用它的时候，每次实现不同的功能。*/
/*  输入ａ和ｂ两个数，第一次调用process时找出ａ和ｂ中大者，*/
/*  第二次找出其中小者，第三次求ａ与ｂ之和。               */
/***********************************************************/

#include <stdio.h>

void main()
{
      int max(int, int);            /* 函数声明 */
      int min(int, int);            /* 函数声明 */
      int add(int, int);            /* 函数声明 */
    
      void process( int, int, int(*fun)() );    /* 函数声明 */
      
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

int max(int x, int y)              /* 函数定义 */
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

int min(int x, int y)              /* 函数定义 */
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

void process( int x, int y, int(*fun)() )    /* 函数定义 */ 
{
      int result;

      result = (*fun)(x, y);
      printf("%d\n", result);
}
