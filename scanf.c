# include<stdio.h>
int main(){
int a,b,c;
//scanf("%d%*c%d%*c%d",&a,&b,&c);--->advanced
scanf("%d,%d,%d",&a,&b,&c);
printf("%d",a+b+c);
return 0;
}
