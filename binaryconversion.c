# include<stdio.h>
int main(){
int n,i=0,b[32],j;
scanf("%d",&n);
printf("The binary eq:");
while(n>0){
b[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--){
printf("%d",b[j]);
}
}
