# include<stdio.h>
struct salarylist{
char name[20];

  struct day{
    char date[9];
    int othrs;
    char attendance[1];
    int advance;
    int salary;
    int total;
              }D[7];
}S[20];
int main(){

int i,j;
     for(i=1;i<=20;i++){
     printf("Enter Name:");
     scanf("%[^\n]s",S.name);

     for(j=1;j<=7;j++){
        printf("Date:");
        scanf("%s",&S.D.date);
        printf("\nAttendance:");
        scanf("%c",&S.D.attendance);
        printf("\nOT:");
        scanf("%d",&S.D.othrs);
        printf("\nAdvance:");
        scanf("%d",&S.D.advance);
        S.D.salary=750+(750*othrs)/8;
        S.D.total+=D.salary;
     }

     }
}










}
