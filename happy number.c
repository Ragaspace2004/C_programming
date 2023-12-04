# include<stdio.h>
_Bool isHappy(int n);
int  main(){
int n=2;
printf("%d",isHappy(n));
}
_Bool isHappy(int n){
int sum=0;
int last;
while(n!=0){
    last=n%10;
    sum=sum+last*last;
    n/=10;}
if(sum==1){
return 1;
}
else{
    isHappy(sum);
}
}
