#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "Hello,wrld!";
   char *ptr;

   ptr = strrchr(str, 'o');
   printf("%s",ptr);

   return 0;
}
