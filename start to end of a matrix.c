# include<stdio.h>
void main(){
int ways(int,int,int,int);
int k=ways(0,0,4,4);
printf("%d",k);
}
int ways(int cr,int cc,int fr,int fc){
if(cr==fr && cc==fc){
return 1;}
if(cr>fr || cc>fc){
return 0;}
return ways(cr+1,cc,fr,fc)+ways(cr,cc+1,fr,fc);}
