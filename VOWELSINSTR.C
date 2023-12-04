#include <stdio.h>
#include <string.h>

 main()
{
    char s[200];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == 'a'||s[i] == 'e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            count++;
    }
    printf("Number of words in given string are: %d\n", count);
}
