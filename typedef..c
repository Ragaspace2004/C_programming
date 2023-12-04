# include<stdio.h>
 typedef struct studentrecords{
char name[20];
int marks;
}sr;
int main(){
sr s={"Raga",568};
printf("%s %d",s.name,s.marks);
}
