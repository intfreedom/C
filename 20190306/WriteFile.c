#include <stdio.h>
#include <stdlib.h>

void main()
{
      FILE *fp;
      char ch, filename[20];

      printf("Please input the filename you want to write: ");
      scanf("%s", filename);

      if( !(fp = fopen(filename, "wt+")))
      {
            printf("Cannot open the file!\n");
            exit(0);   // ÷’÷π≥Ã–Ú
      }

      printf("Please input the sentences you want to write: ");
      // ch = getchar();  // «ÎÀºøº°≠°≠
      ch = getchar();
      while( ch != EOF )   // ctrl + z
      {
            fputc(ch, fp);
            ch = getchar();
      }

      fclose(fp);
}
