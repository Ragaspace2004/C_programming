# include<stdio.h>
# include<stdlib.h>

int main(){
int c[100];
*c=(int*)malloc(5*sizeof(int));
for(int i=0;i<5;i++){
scanf("%d",&c[i]);}
for(int j=0;j<5;j++){

printf("%d",c[j]);}
}
