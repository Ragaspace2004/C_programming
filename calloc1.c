# include<stdio.h>
int main(){
int n,*ptr,i;
printf("Enter no of elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL){
printf("No\n");
}
else{
printf("Yes\n");
for(i=0;i<n;i++){
ptr[i]=i+1;
}
for(i=0;i<n;i++){
printf("%d",ptr[i]);
}}
free(ptr);

}
