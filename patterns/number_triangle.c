#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(a=1;a<=i;a++)
        {
            printf("%d",n);
        }
    }
}