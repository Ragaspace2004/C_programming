# include<stdio.h>
int main()
{
int lowestrange,highestrange,number=0;
scanf("%d",&lowestrange);
scanf("%d",&highestrange);
for(lowestrange;lowestrange<=highestrange;lowestrange++){
if(lowestrange%5==0){
number++;}
}
printf("%d",number);}
