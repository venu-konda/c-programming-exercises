#include<limits.h>
#include <stdio.h>
int i,j;
int checkString(char *,int);
int main()
{
    int n=INT_MAX-1;
    char str1[n];
    INPUT:
    scanf("%s",str1);
    if(checkString(str1,n)==0)
    goto INPUT;
    printf("%s",str1);
   
}

int checkString(char *p,int n)
{
    for(i=0;i<n;i++)
    {
        if((p[i]>=48)&&(p[i]<=57))
        continue;
        
        else return 0;
        
    }
}
