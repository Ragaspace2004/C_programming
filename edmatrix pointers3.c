# include<stdio.h>
int main(){
    int N=0;
    int *M=NULL;
    printf("Value of N before Assigning %d",N);
    printf("\nValue of M before Assigning ",M);
    printf("\nEnter the value of N\n");
    scanf("%d",&N);
    M=&N;
    printf("Value of N After Assigning\n%d",N);
    printf("\nValue of M After Assigning\n%x",M);


}
