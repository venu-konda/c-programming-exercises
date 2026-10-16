#include<string.h>
#include <stdio.h>
int main()
{
    char s[100],*p;
    int i=0,flag=0,decimal=0;
    float num=0,d=1;
    gets(s);
    if(s[0]=='-'&&s[0]=='+')
        {
            if(s[i]=='-')
            flag=1;
            i++;
        }
    for(i;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            num=num*10+(s[i]-48);
            if(decimal==1)
            d/=10;
        }
        else if(s[i]=='.')
        {
            decimal=1;
        }
    }
    if(flag==1)
    num=num*(-1);
    printf("%f",num*d);
}

