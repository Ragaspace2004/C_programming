//Swap 2 numbers without temp variable

# include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d\n",a);
printf("%d",b);
}
