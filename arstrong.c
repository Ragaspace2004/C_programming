# include<stdio.h>
# include<math.h>
int main()
{
int n,temp,x,sum,a;
scanf("%d",&temp);
n=temp;
for(n;n!=0;++a){
n=n/10;
}

for(n;n!=0;n=n/10){
x=n%10;
sum+=pow(x,a);
}
if(sum==temp){
printf("This is an armstrong no");}
else{
printf("This is not an armstrong no");}
}
