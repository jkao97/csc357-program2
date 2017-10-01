#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
   FILE *file = fopen(argv[1], "r");
   if (argc < 2) {
      printf("usage: fw [-n num] [file1 [file2 ...] ]\n");
      return 1;
   }
   
   if (file == 0) {
      printf("%s: No such file or directory\n", argv[1]);
      printf("The top 10 words (out of 0) are:\n");
      return 1;
   } else {
      printf("done");
   }

   fclose(file);
   return 0;
}
