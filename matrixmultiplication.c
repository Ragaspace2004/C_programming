# include<stdio.h>
int main(){
int i,j,k,n,m,o,p;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&o);
scanf("%d",&p);
int a[m][n];
int b[o][p];
int c[n][p];
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d",&a[i][j]);
}}
for(i=0;i<o;i++){
for(j=0;j<p;j++){
scanf("%d",&b[i][j]);
}}
for(i=0;i<n;i++){
for(j=0;j<p;j++){
c[i][j]+=a[i][j]*b[i][j];
}
printf("%d ",c[i][j]);}
printf("\n");}
