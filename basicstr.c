# include<stdio.h>
struct passenger{
char name[20];
int age;
char source[20];
char destination[20];
};
int main(){
    struct passenger *ptr;
ptr->name="raga";
ptr->age=18;
ptr->source="seaa";
ptr->destination="hhfhd";
printf("Name:%s",ptr->name);
printf("\nAge:%d",ptr->age);
printf("\nSource:%s",ptr->source);
printf("\nDestination:%s",ptr->destination);}
