# include<stdio.h>
int main(){
int l,a[5];//={5,2,3,4,5};
a[0]=1;
a[1]=2;
a[2]=3;
a[3]=4;
a[4]=5;
int *p=a,*q=&a[4];
l=q-p;
printf("%d",p[2]);}
