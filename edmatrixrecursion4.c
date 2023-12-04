#include<stdio.h>
int GCD(int a, int b){
    if(b<=0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main(){
    int a,b;
    printf("Enter two postive Integers:\n");
    scanf("%d\n%d",&a,&b);
    printf("GCD of %d and %d is %d.",a,b,GCD(a,b));
    return 0;
}
