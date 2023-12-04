# include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int *p=&a,*q=&b;
if(*p>*q){
printf("%d is the largest.",*p);
}
else{
printf("%d is the largest.",*q);}}
