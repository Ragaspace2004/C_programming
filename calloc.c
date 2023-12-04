#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,*ptr,*ptr1;
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
ptr1=(int*)realloc(ptr,7*sizeof(int));
for(i=0;i<=7;i++){
    scanf("%d",ptr1+i);
}
for(i=0;i<7;i++){
    printf("%d",*(ptr1+i));

}
printf("%d %d",ptr[n-1],ptr1[n-1]);
free(ptr);
}
