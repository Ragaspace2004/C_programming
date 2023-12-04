# include<stdio.h>
int f(){
int a=10;
return &a;}
int main(){
int *ptr=f();
printf("%d",*ptr);}
