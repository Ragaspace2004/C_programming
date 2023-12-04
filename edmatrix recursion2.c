#include<stdio.h>
int fact(int n){
    if(n!=0)
    return n*fact(n-1);
    else
    return 1;
}
int main(){
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
