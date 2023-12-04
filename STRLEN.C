#include <stdio.h>
#include <string.h>
int main()
{
 char name[20];
 int len;
 gets(name);
 len=strlen(name);
 printf("length=%d",len);
 }
