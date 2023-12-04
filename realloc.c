# include<stdio.h>
int main(){
int n,*ptr,i,x;
printf("Enter no of elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL){
printf("No\n");
}
else{
printf("Yes\n");
printf("Reallocated size:");
scanf("%d",&x);
ptr=(int*)realloc(ptr,x*sizeof(int));
for(i=0;i<x;i++){
ptr[i]=i+1;
}
for(i=0;i<x;i++){
printf("%d",ptr[i]);
}}
free(ptr);
}
