#include <stdio.h>

void  main046c3()
{
      void copy_stringc3( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student.";

      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_stringc3(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);
}

void  copy_stringc3( char *from, char *to )
{
      while( *from != '\0' )
      {
            *to++ = *from++;
      }
      *to = '\0';
}

