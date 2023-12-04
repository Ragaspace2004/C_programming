# include<stdio.h>
int main()
{
int n,k,a,b;
int temp_and=0,max_and=0,temp_or=0,max_or=0,temp_xor=0,max_or=0;
scanf("%d %d",&n,&k);
while(n--)
{
scanf("%d %d",&a,&b);
temp_and=a&b;
temp_or=a|b;
temp_xor=a^b;
if(temp_and<k && temp_and>=max_and)
   max_and=temp_and;
if(temp_or<k && temp_or>=max_or)
   max_or=temp_or;
if(temp_xor<k && temp_xor>=max_xor)
   max_xor=temp_xor;
}
printf("\n\n%d\n",max_and);
printf("%d\n",max_or);
printf("%d\n",max_xor);
return 0;
}
