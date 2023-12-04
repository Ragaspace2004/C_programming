# include<stdio.h>
int main()
{
float n1,n2,n3,n4,n5;
printf("Enter 5 numbers:");
scanf("\n%f \n%f \n%f \n%f \n%f",&n1,&n2,&n3,&n4,&n5);
printf("The average of 5 numbers:%0.2f",(n1+n2+n3+n4+n5)/5);
return 0;
}
