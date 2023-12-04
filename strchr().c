#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "Hello, world!";
   char *ptr;

   ptr = strchr(str, 'o');
   printf("First occurrence of 'o' is found at: %s\n", ptr);

   return 0;
}
