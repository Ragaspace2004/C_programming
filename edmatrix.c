#include <stdio.h>

int main() {
  int size,i;
 int a[size];
 for(i=0;i<size;i++){
     scanf("%d",&a[i]);
 }
 int max=a[0];
 int min=a[0];
 for(i=0;i<size;i++){
     if(a[i]<min){
         min=a[i];
     }
    if(a[i]>max)
        max=a[i];
    }
 printf("Maximum element is : %d",max);
 printf("Minimum element is : %d",min);

  return 0;
}
