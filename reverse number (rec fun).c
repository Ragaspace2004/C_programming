# include<stdio.h>
int f1(int n){
printf("%d",n);
if(n<=2)
{
f1(n+1);}
printf("%d",n);
}
void main(){
int k=f1(1);
printf("%d",k);
return 0;
}
