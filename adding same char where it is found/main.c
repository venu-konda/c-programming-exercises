#include<string.h>
#include<stdio.h>
int i,j,l;
int main()
{
    char s[30],ch[2];
    fgets(s,30,stdin);
    l=strlen(s);
    fgets(ch,2,stdin);
    for(i=0;s[i];i++)
    {
            if(s[i]==ch[0])
            {
                memmove(s+i+1,s+i,l-i+1);
                strncpy(s+i,ch,1);
                i++;
            }
        }
    printf("%s",s);
}
