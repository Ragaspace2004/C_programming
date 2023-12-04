#include <stdio.h>
#include <string.h>

int main() {
   FILE *fp;
   char str[100];
   int ch;

   // writing to a file using fputs() and fputc()
   fp = fopen("file.txt", "w");
   fputs("Hello World!\n", fp);
   fputc('A', fp);
   fclose(fp);

   // reading from a file using fgets() and fgetc()
   fp = fopen("file.txt", "r");
   fgets(str, 100, fp);
   printf("fgets() read: %s", str);
   ch = fgetc(fp);
   printf("fgetc() read: %c\n", ch);
   fclose(fp);

   // writing and reading integers using fprintf() and fscanf()
   int x = 10, y;
   fp = fopen("nums.txt", "w");
   fprintf(fp, "%d", x);
   fclose(fp);
   fp = fopen("nums.txt", "r");
   fscanf(fp, "%d", &y);
   printf("fscanf() read: %d\n", y);
   fclose(fp);

   // using fseek(), rewind(), and ftell() to navigate a file
   fp = fopen("file.txt", "r");
   fseek(fp, 7, SEEK_SET);
   ch = fgetc(fp);
   printf("fseek() to 7: %c\n", ch);
   rewind(fp);
   ch = fgetc(fp);
   printf("rewind() to beginning: %c\n", ch);
   int pos = ftell(fp);
   printf("ftell() at pos %d\n", pos);
   fclose(fp);

   return 0;
}

