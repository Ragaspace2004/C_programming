# include<stdio.h>
int main(){
int max(int a[],int n);
int a[100]={1,20,3,4,50},maxy;
maxy=max(a,3);
printf("The maximum element :%d",maxy);
return 0;
}
max(int a[],int n){
int i,maxi=0;
for(i=0;i<n;i++){
if(a[i]>maxi){
maxi=a[i];}}
return maxi;}
