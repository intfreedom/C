#include <stdio.h>

void main045t1()
{
      char a[] = "Fishc.com is a good web site!", b[40];
      int i;
      
      for(i=0; *(a+i) != '\0'; i++)
      {
            *(b+i) = *(a+i);
      }
      *(b+i) = '\0';

      printf("String a is: %s\n", a);
      printf("String b is: ");
      for(i=0; b[i] != '\0'; i++)
      {
            printf("%c", b[i]);
      }
      
      printf("\n\n");

	  getchar();
}
