#include<string.h>
#include <stdio.h>

int main()
{
    char s[30];
    gets(s);
    int l=strlen(s);
    memmove(s,s+1,l);
    printf("%s",s);
    
}
