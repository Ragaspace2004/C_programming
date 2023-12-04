//Library details
# include <stdio.h>
struct Lib{
char name[50];
int registerno;
char dept[10];
}l;
int main(){
printf("Library details:\n");
printf("Name:");
scanf("%[^\n]s",l.name);
printf("Register No:");
scanf("%d",&l.registerno);
printf("Department:");
scanf("%s",&l.dept);
printf("Library details:\n");
printf("Name:");
printf("%s\n",l.name);
printf("Register No:");
printf("%d\n",l.registerno);
printf("Department:");
scanf("%s\n",l.dept);
}
