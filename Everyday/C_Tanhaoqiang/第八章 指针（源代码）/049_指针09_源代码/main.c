#include <stdio.h>
#include <stdlib.h>

void main048m (int argc, char *argv[])
{
      int i;

      printf ("the number of string is : %d\n", argc-1);

      for(i=1; i < argc; i++)
      {
            printf ("the string %d is : %s\n", i, argv[i]);
      }

	  getchar();
}
