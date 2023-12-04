# include<stdio.h>
/*union sr{
char name[20];
int marks;
}s;*/
int main(){
    union sr{
char name[20];
int marks;
};
union sr s;
//s.name="Raga";s.marks=568;
s={"Raga",568};
printf("%s %d",s.name,s.marks);
}

