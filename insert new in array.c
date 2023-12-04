//inserting a new element at the desired location in an array
# include<stdio.h>
int main(){
int n,i,pos,element;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the position of the element to be inserted:");
scanf("%d",&pos);
printf("Enter the element:");
scanf("%d",&element);
for(i=n-1;i>=pos-1;i--){
a[i+1]=a[i];}
a[pos-1]=element;

printf("New array:");
for(i=0;i<=n;i++){
    printf("%d ",a[i]);
}}
