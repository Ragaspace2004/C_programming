# include<stdio.h>
void printarray(int a[],int size)
{
    int i=0;
    while(i<size){
        printf("%d\t",a[i]);
        i++;
    }
}
int main(){
int size,i,j,num,temp;
scanf("%d",&size);
scanf("%d",&num);
int a[size];
i=0;
while(i<size){
    scanf("%d",&a[i]);i++;
}
while(i<num){
    temp=a[0];
    j=0;
    while(j<size-1){
        a[j]=a[j+1];
          j++;
    }
    a[size-1]=temp;i++;
}
printarray(a,size);
return 0;
}
