# include<stdio.h>
int rev(int);
int main(){int n;
scanf("%d",&n);
rev(n); }
int rev(int n){int i;
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=n-1;i>=0;i--){
printf("%d ",arr[i]);
}}
