
# include<stdio.h>
int main()
{
int i,n,x,sum,temp;
scanf("%d",&n);
temp=n;
for(n;n!=0;n=n/10){
x=n%10;
sum=sum*10+x;}
if(sum==temp){
printf("palindrome");}
}
