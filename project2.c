//displaying values of the datatypes
# include<stdio.h>
int main()
{
int integer;
long linteger;
long long llinteger;
char character;
float decimal;
double longfloat;
scanf("%d",&integer);
scanf("\n%ld",&linteger);
scanf("\n%lld",&llinteger);
scanf("\n%c",&character);
scanf("\n%f",&decimal);
scanf("\n%lf",&longfloat);
printf("\n%d",integer);
printf("\n%ld",linteger);
printf("\n%lld",llinteger);
printf("\n%c",character);
printf("\n%0.2f",decimal);
printf("\n%0.5lf",longfloat);
return 0;
 }
