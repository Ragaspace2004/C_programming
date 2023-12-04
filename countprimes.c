# include<stdio.h>


int countPrimes(int n){
    int flag=0,count=0;
    if(n==0 || n==1){
        return 0;
    }
    else{
    for(int i=2;i<10;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                flag++;
            }}
            if(flag==2){
                count++;
            }
        }
    }
return count;
}

int main(){
int n=10;
printf("Primes:",countPrimes(n));}
