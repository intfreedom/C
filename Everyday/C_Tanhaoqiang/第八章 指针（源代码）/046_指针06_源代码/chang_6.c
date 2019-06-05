#include <stdio.h>

void  main()
{
      void copy_stringa(char from[], char to[]);

      char *a = "I am a teacher.";
      char b[] = "You are a student.";

      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_stringa(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);

	  getchar();
}

void  copy_stringa( char from[], char to[] )
{
      /*char *p1, *p2;
      
      p1 = from;
      p2 = to;

      while( (*p2++ = *p1++) != '\0' )
      {
            ;
      }*/

	while (*to++ = *from++)
	{
		;
	}
}