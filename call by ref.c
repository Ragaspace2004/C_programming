# include<stdio.h>
void fun(int*,int*);
int main(){
int x=10,y=20;
fun(&x,&y);
printf("%d %d",x,y);

}
void fun(int*x,int*y){
*x=12;
*y=15;
}
