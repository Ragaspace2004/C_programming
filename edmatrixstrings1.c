#include<stdio.h>
int main(){
    char str[30];
    printf("Enter the string:\n");
    scanf("%[^\n]s",&str);
    printf("%s",str);
    return 0;
}
