# include<stdio.h>
int main(){
int a[50][50],b[50][50],c,pdt[50][50],i,j,k,arows,acolumns,brows,bcolumns;
printf("Enter rows &columns:");
scanf("%d %d",&arows,&acolumns);
scanf("%d %d",&brows,&bcolumns);
if(acolumns!=brows){
printf("NOT POSSIBLE");}
else{
printf("Elements of A matrix:");
for(i=0;i<arows;i++){
for(j=0;j<acolumns;j++){
scanf("%d",a[i][j]);
}
}
printf("Elements of B matrix:");
for(i=0;i<brows;i++){
for(j=0;j<bcolumns;j++){
scanf("%d",b[i][j]);
}
}

for(i=0;i<arows;i++){
for(j=0;j<bcolumns;j++){
for(k=0;k<brows;k++){
c+=a[i][k]*b[k][j];
}
pdt[50][50]=c;
c=0;}
}}
for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
    printf("%d ",pdt[i][j]);}
    printf("\n");
}
return 0;}
