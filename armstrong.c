# include<stdio.h>
int main(){
int i,x,sum;
for(i=1;i<=1000;i++){
int temp=i;
for(i;i!=0;i=i/10){
x=i%10;
sum+=x*x*x;}
if(sum==temp)
{
printf("%d\n",sum);}
}}
