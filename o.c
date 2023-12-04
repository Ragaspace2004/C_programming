# include<stdio.h>
int rev(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
return(a,b);}

int main(){
int a,b;
scanf("%d %d",&a,&b);
rev(&a,&b);
printf("%d %d",a,b);}
