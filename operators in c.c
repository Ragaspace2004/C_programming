# include<stdio.h>
int main(){
int a,b;
printf("Enter 2 numbers:");
scanf("%d %d",&a,&b);
//Arithmetic operators

printf("Add:%d",a+b);
printf("\nSub:%d",a-b);
printf("\nMul:%d",a*b);
printf("\nDiv:%d",a/b);
printf("\nMod:%d",a%b);

//Assignment operator

a+=20;
b+=10;
a-=20;
b-=10;
a*=20;
b*=10;
a/=20;
b/=10;
a%=1;
b%=2;

//Equality operator

printf("\nEqual to:%d",a==b);
printf("\nNot equal to:%d",a!=b);

//Relational operator

printf("\n%d %d",a>b,a<b);
printf("\n%d %d",a>=b,a<=b);

//Logical operators

printf("\nAnd:%d",a>b && b>a);
printf("\nOr:%d",a>b || b>a);
printf("\nNot:%d",!a);

//Increment Decrement

printf("\nPI:%d\tPD:%d",a++,a--);
printf("\nPRE I:%d\tPRE D:%d",++a,--a);

//Conditional Operator

(a>b)?printf("\n%d is max",a):printf("\n%d is max",b);

//Special operators

printf("\nSizeof input:%d",sizeof(a));
int *ptr=&a;
printf("\nIndirection:%d",*ptr);

//Bitwise operators

printf("\na&b:%d",a&b);
printf("\na|b:%d",a|b);
printf("\n~a:%d",~a);
printf("\na<<2:%d",a<<2);
printf("\na>>2:%d",a>>2);
printf("\na^b:%d",a^b);
}
