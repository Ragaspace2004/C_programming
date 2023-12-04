# include<stdio.h>
int main()
{
int number,factor,pn=0;
scanf("%d",&number);
for(factor=1;factor<number;factor++){
if(number%factor==0){
pn+=factor;
}}
if(pn==number){
printf("It\'s a perfect number ");}}
