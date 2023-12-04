# include<stdio.h>
int main(){
int n,key,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("KEY:");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(key==a[i]){
        printf("Key found at %d",i);
    break;}
}
}
