#define _CRT_SECURE_NO_WARNINGS
/****************************/
/* �Ƚ�a �� b�Ĵ�С�����ֵ */
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
//�� main ������дΪ
#include <stdio.h>

void main()
{
	//һ�������ڱ���ʱ�������һ����ڵ�ַ�������������ڵ�ַ�ͳ�Ϊ������ָ�룻
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