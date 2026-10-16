#include<stdio.h>
int main()
{
    int data,n,i;
    scanf("%d",&n);
    int a=0,b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d,",a);
        int result=a+b;
        a=b;
        b=result;
    }
}