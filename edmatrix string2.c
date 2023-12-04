#include<stdio.h>
int main(){
    int i=0,count=0;
    char str[30];
    printf("Enter the string:");
    gets(str);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("The length of the string is %d",count);
    return 0;
}
