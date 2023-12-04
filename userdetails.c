#include <stdio.h>

int main() {
  char name[100];
  char schoolName[100];
  int regNo;
  int totalMark;
  char  section;
  scanf("%[^\n]s",name);
  scanf("%[^\n]s",schoolName);
  scanf("%d",&regNo);
  scanf("%d",&totalMark);
  scanf("%c",&section);
  printf("%s",name);
  printf("%s",schoolName);
  printf("%d",regNo);
  printf("%d",totalMark);
  printf("%c",section);



  return 0;
}
