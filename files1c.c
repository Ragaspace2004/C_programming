#include <stdio.h>

int main() {
   FILE *fp;
   char buffer[255];

   // writing to a file
   fp = fopen("file.txt", "w");
   fprintf(fp, "Hello World!\n");
   fputs("This is a test.\n", fp);
   fclose(fp);

   // reading from a file
   fp = fopen("file.txt", "r");
   fgets(buffer, 255, fp);
   printf("%s", buffer);
   fgets(buffer, 255, fp);
   printf("%s", buffer);
   fclose(fp);

   return 0;
}



