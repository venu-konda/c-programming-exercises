
#include <stdio.h>
#include<string.h>
int i;
int main()
{
    char s[30];
    gets(s);
    int l=strlen(s);
    for(i=0;i<=l;i++)
    {
        if(s[i]==' ')
        {
        memmove(s+i,s+i+1,l-i);
        i--;
        }
    }
    printf("%s",s);

    return 0;
}
