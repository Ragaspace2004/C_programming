// INCOME TAX CALCULATION
# include<stdio.h>
int main()
{
float income;
scanf("%f",&income);
if(income==50000)
{
printf("INCOME TAX:%f",(1*income)/100);
}
else if((income>50000)&&(income<=75000))
{
printf("INCOME TAX:%f",(2*income)/100);}
else if((income>75000)&&(income<=100000))
{
printf("INCOME TAX:%f",(3*income)/100);}
else if((income>100000)&&(income<=250000))
{
printf("INCOME TAX:%f",(4*income)/100);}
else if(income>250000)
{
printf("INCOME TAX:%f",(5*income)/100);}
return 0;
}
