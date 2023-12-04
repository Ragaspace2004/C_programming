# include<stdio.h>
struct passenger{
char name[20];
int age;
char source[7];
char dest[7];
};

void main(){
int n,i;
printf("No.of passengers:");
scanf("%d",&n);
struct passenger p[n];
for(i=1;i<=n;i++){
printf("Passenger no:%d",i);
printf("\nEnter passenger name:");
scanf("%s",p[i].name);
printf("Enter age:");
scanf("%d",&p[i].age);
printf("Enter source:");
scanf("%s",p[i].source);
printf("Enter Destination:");
scanf("%s",p[i].dest);
}

printf("\nNo.of passengers:%d\n\n",&n);
for(i=1;i<=4;i++){
printf("Passenger no:%d",i);
printf("\npassenger name:%s",p[i].name);
printf("\n age:%d",p[i].age);
printf("\nsource:%s",p[i].source);
printf("\nDestination:%s\n",p[i].dest);
}

}
