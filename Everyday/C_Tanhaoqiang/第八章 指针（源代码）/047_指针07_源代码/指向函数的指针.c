#define _CRT_SECURE_NO_WARNINGS
/****************************/
/* 比较a 和 b的大小，求大值 */
/****************************/

#include <stdio.h>

#if(0)
void main()
{
      int max1(int, int);
      int a, b, c;

      scanf("%d %d", &a, &b);
      
      c = max1(a, b);
      
      printf("a = %d, b = %d, max = %d\n\n", a, b, c);
}
#endif

int max1(int x, int y)
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

#if(1)
//将 main 函数改写为
#include <stdio.h>

void main()
{
	//一个函数在编译时被分配给一个入口地址，这个函数的入口地址就称为函数的指针；
      int max1(int, int);
      int (*p)();
      int a, b, c;

      p = max1;
      scanf("%d %d", &a, &b);
      
      c = (*p)(a, b);
      
      printf("a = %d, b = %d, max = %d\n\n", a, b, c);

	  getchar();
	  getchar();
}

#endif