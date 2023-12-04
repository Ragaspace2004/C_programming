//ENTRY FEE
#include<stdio.h>
int main()
{
int class7s=60,class8s=55,class9s=48,students;
int class7f=3,class8f=2,class9f=2,faculties;
int fcost=40,scost=20;
students=class7s+class8s+class9s;
faculties=class7f+class8f+class9f;
printf("Total number  of people:%d",students+faculties);
printf("\nTotal entry cost of the faculty:Rs.%d",faculties*fcost);
printf("\nAdmission costs for all adults and children:Rs.%d",
       (students*scost)+(faculties*fcost));
printf("\nExtra amount:Rs.%d",((students*scost)+(faculties*fcost))-3200);
return 0;
}
