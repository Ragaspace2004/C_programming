//SORTING
# include<stdio.h>
int main(){
char a[100],temp;
gets(a);
int i,j;
/*for(i=0;i<n;i++){
scanf("%d",&a[i]);
}*/
for(i=0;a[i]!='\0';i++){
for(j=i+1;a[j]!='\0';j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
for(i=0;a[i]!='\0';i++){
printf("%s ",a[i]);
}
}

