#include<stdio.h>
int i;
int main()
{
    char s[10]="venuKonda";
    for(i=0;i<10;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        s[i]-=32;
        else if(s[i]==0)
        break;
    }
    printf("%s",s);
    
}
