#include<stdio.h>
int main(){
    int count=0,i;
    char str[30],ch;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter a character to find its frequency:\n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("The frequency of %c is %d",ch,count);
    return 0;
}
