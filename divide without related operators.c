# include<stdio.h>

int divide(int dividend, int divisor){
 int i,div=0;
if(divisor>0){
for(i=0;div>=divisor;i++){
div=dividend-divisor;
}
return div;}
else{
for(i=0;div>=divisor;i++){
div=dividend+divisor;
}
return -(div);
}
}
int main(){
int dividend,divisor;
scanf("%d %d",&dividend,&divisor);
printf("%d",divide(dividend,divisor));
}
