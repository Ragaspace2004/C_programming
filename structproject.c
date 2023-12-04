# include<stdio.h>
struct pass{
    char name[20];
    int age;
    struct route{
    char source[20];
    char dest[20];
    }R;
}P;
void main(){
printf("Passenger details:\n");
printf("Name:");
scanf("%s",&P.name);
printf("Age:");
scanf("%d",&P.age);
printf("Source:");
scanf("%s",&P.R.source);
printf("Destination:");
scanf("%s",&P.R.dest);

printf("%s\n",P.name);
printf("%d\n",P.age);
printf("%s\n",P.R.source);
printf("%s\n",P.R.dest);
}
