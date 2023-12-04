#include <stdio.h>
int main(){
    char a[26];
    int *ptr;
    ptr=a;
    for(int i=65;i<=90;i++){
        printf("%c ",*(ptr+i));
    }
    }
