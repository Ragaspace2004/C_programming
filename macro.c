#include<stdio.h>
#define min(a,b) (a<b)?a:b
int main()
{int a,b;
printf("give a and b value:");
scanf("%d %d",&a,&b);
printf("%d",min(a,b));
return 0;
}
