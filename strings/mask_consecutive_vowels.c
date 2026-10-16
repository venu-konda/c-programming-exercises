#include<string.h>
#include <stdio.h>
int isvowel(char *);
int main()
{
    char s[30],*p,*q;
    gets(s);
    int i;
    p=s;
    for(p;*p;p++)
    {
        if(isvowel(p)&&isvowel(p+1))
        {
            *p='*';
            *(p+1)='*';
        }
    }
    printf("%s",s);
}
int isvowel(char *p)
{
    char vowels[]="aeiouAEIOU";
    for(int i=0;vowels[i];i++)
    if(*p==vowels[i])
    return 1;
    return 0;
}
