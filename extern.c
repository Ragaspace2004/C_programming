# include<stdio.h>
int x=10;
int main(){
 x+=20;
 extern int y;
printf("%d",y);
y=35;//this value isn't considered
}
y=10;

