# include<stdio.h>
# define sqr(x)(x*x)
int main(){
int x;
float y;
x=sqr(3);
y=sqr(3.1);
printf("%d",x);
printf("\n%f",y);
return 0;
}
