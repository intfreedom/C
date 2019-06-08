#include <stdio.h>

void main()
{
      char *name[] = {"Fishc.com", "www.fishc.com", "home.fishc.com", "Fishc.com/dz"};
      char **p;
      int i;
	  printf("%s %0x %0x\n",*name,name[0],name);
	  printf("%s %0x %0x\n",*(name+1),name[1],name+1);
	  printf("%s %0x %0x\n",*(name+2),name[2],name+2);

	  getchar();

      for( i=0; i < 4; i++ )
      {
            p = name + i;
            printf("%s\n", *p);
      }

	  getchar();
}
