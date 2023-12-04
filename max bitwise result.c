#include <stdio.h>

int main() {
    int n,k,i,j,max1,max2,max3,ando[100],oro[100],xoro[100],a,b;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
          ando[j]=i&j;
          oro[j]=i|j;
          xoro[j]=i^j;
        }
    }
    for(a=1;a<=n;a++){
        for(b=a+1;b<=n;b++){
            if(((ando[i]>ando[j])||(oro[i]>oro[j])||(xoro[i]>xoro[j]))){
                if(ando[i]<k && oro[i]<k && xoro[j]<k){
                max1=ando[i];
                max2=oro[i];
                max3=xoro[i];}
            }
            else{
                if(ando[i]<k && oro[i]<k && xoro[j]<k){
                max1=ando[j];
                max2=oro[j];
                max3=xoro[j];
            }}}
printf("%d\n%d\n%d",max1,max2,max3);
        }
