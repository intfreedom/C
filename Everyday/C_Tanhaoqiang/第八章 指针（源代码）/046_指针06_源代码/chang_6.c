#include <stdio.h>

void  main()
{
      void copy_string( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student.";

      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_string(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);
}

void  copy_string( char from[], char to[] )
{
      char *p1, *p2;
      
      p1 = from;
      p2 = to;

      while( (*p2++ = *p1++) != '\0' )
      {
            ;
      }
}