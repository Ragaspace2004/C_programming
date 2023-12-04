# include<stdio.h>
int swap(int* a,int* b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
main(){
int a=10,b=20;
swap(&a,&b);
printf("%d %d",a,b);}
