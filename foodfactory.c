# include<stdio.h>
typedef int a;
 struct FOODFACTORY{
a f_productId;
char f_product_Name[15];
a fstock_available;
a fcost;
}ff;
main(){
int x;
scanf("%d",&ff.f_productId);
scanf("\n%[^\n]s",&ff.f_product_Name);
scanf("\n%d",&ff.fstock_available);
scanf("\n%d",&ff.fcost);
scanf("\n%d",&x);
if(x<=ff.fstock_available){
printf("\nstock is available");}
else{
printf("\nThe stock is insufficient");}
}
