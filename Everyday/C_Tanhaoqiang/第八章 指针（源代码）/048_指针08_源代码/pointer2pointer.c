#include <stdio.h>

void main()
{
      char *name[] = {"Fishc.com", "www.fishc.com", "home.fishc.com", "Fishc.com/dz"};
      char **p;
      int i;

      for( i=0; i < 4; i++ )
      {
            p = name + i;
            printf("%s\n", **p);
      }
}
