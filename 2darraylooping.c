# include<stdio.h>
int main(){
int a[2][3];
for(int i=0;i<2;i++){
   for(int j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
printf("%d\t",a[j][i]);
}
printf("\n");
}
}
