#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main21()
{ 
      int *p1, *p2, *p, a, b;

      scanf("%d %d", &a, &b);
      p1 = &a;
      p2 = &b;
      
      if( a < b)     
      {
            p = p1;
            p1 = p2;
            p2 = p;
      } //此后，p1指向b, p2指向a ^_^
      
      printf("a = %d, b = %d\n", a, b);
      printf("max = %d, min = %d\n", *p1, *p2);

	  //system("pause");
}

