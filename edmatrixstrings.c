#include<stdio.h>
int main(){
    int i;
    char str[30];
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    return 0;
}
