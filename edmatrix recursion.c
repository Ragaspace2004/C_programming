#include<stdio.h>
int naturalSum(int n){
    if(n!=0)
    return n+naturalSum(n-1);
}
int main(){
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    printf("%d",naturalSum(n));
    return 0;
}
