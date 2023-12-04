# include<stdio.h>
int g=0;
void f1(){
g++;
}
void f2(){
g++;
}
void main(){
g++;
test();
f1();
f2();
printf("%d",g);}
