#include<string.h>
#include<stdio.h>
int main()
{
    char s[100],*p;
    gets(s);
    int i,flag=0,num=0;
    for( i=0;s[i];i++)
    {
        if((s[i]=='-'||s[i]=='+')&&i==0)
        {
            if(s[0]=='-')
            flag=1;
            i++;
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            num=num*10+(s[i]-48);
        }
        else 
        {
            printf("inavalid");
            return 0;
        }
    }
    if(flag==1)
    num=num*(-1);
    printf("%d",num);
    
}

