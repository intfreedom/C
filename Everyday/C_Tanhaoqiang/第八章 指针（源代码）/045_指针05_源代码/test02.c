#include <stdio.h>

void main()
{
      char a[] = "Fishc.com is a good web site!", b[40], *p1, *p2;
      int i;
      
      p1 = a;
      p2 = b;
      
      for( ; *p1 != '\0'; p1++, p2++)
      {
            *p2 = *p1;
      }
      *p2 = '\0';

      printf("String a is: %s\n", a);
      printf("String b is: ");
      for(i=0; b[i] != '\0'; i++)
      {
            printf("%c", b[i]);
      }

      printf("\n");
}
