#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],temp[30];
    scanf("%[^\n]s",s);
    int i,l;
    l=strlen(s);
    for(i=0;s[i];i++)
    {
        temp[l-1]=s[i];
        l--;
    }
    printf("%s",temp);
}

