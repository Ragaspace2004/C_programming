#include <stdio.h>
struct values
{
 int i;
 float f;
};
int main()
{
 struct values v;
 v.i=2;
 v.f=2.3;
 printf("%d,%f",v.i,v.f);

}
