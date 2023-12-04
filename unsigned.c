#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   printf("The range of different datatypes in C is as follows:\n");

   printf("Boolean values: %d to %d\n", 0, 1);
   printf("Integers: %ld to %ld\n", INT_MIN, INT_MAX);
   printf("Floating-point numbers: %e to %e\n", FLT_MIN, FLT_MAX);
   printf("Double-precision floating-point numbers: %e to %e\n", DBL_MIN, DBL_MAX);
   printf("Characters: %d to %d\n", CHAR_MIN, CHAR_MAX);
   printf("Unsigned integers: %u to %lu\n", 0, UINT_MAX);

   return 0;
}
