# include<stdio.h>
int main()
{
int count,num,n,sum=0;
scanf("%d",&count);
scanf("%d",&num);
for(num=num;num<=count;num/10)
{
n=num%10;
sum=sum+n;
}
printf("The sum of %d numbers is %d",count,sum);
printf("\nThe average of %d is %d",count,sum/count);
}
