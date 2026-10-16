#include<string.h>
#include <stdio.h>
int isvowel(char *);
int main()
{
    char s[100],*p,*q;
    gets(s);
    p=strtok(s," ");
    while(p)
    {
        if(isvowel(p)&&(isvowel(p+strlen(p)-1)))
        printf("%s ",p);
        p=strtok(NULL," ");
    }
}
int isvowel(char *p)
{
    char vowels[]="aeiouAEIOU";
    int i;
    for(i=0;vowels[i];i++)
    if(vowels[i]==*p)
    return 1;
    return 0;
}