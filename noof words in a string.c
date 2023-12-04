#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i,c=0;

    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;

    }
    for(int j=;s[j]!='\0';j++){
        c++;
    }
    printf("Number of words in given string are: %d\n", count+1);

    printf("Number of words in given string are: %d\n", c);
}
