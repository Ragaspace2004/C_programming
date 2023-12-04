# include<stdio.h>
# include<math.h>
int main(){
float d,a,b,c,root1,root2;
printf("a:");
scanf("%f",&a);
printf("b:");
scanf("%f",&b);
printf("c:");
scanf("%f",&c);
d=b*b-4*a*c;
if(d>=0){
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("Root1:%.2f\nRoot2:%.2f",root1,root2);
}
}
