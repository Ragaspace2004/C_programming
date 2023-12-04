# include<stdio.h>
int main(){
int num,copy,last,fact,sum=0,i;
scanf("%d",&num);
copy=num;
while(num>0){
fact=1;
last=num%10;
for(i=1;i<=last;i++){
fact=fact*i;
}
sum+=fact;
num/=10;
}
if(sum==copy){
printf("STRONG NUMBER");
}
else{
printf("NOT A STRONG NUMBER");
}
}
