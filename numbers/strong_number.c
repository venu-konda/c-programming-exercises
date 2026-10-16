#include<stdio.h>
int main()
{
    int data,rem,fact=1,i;
    scanf("%d",&data);
    int temp=data;
    while(temp)
    {
        rem=temp%10;
        for(i=1;i<=rem;i++)
        {
            fact*=i;
        }
        temp/=10;
        
    }
    if(fact==data)
    {
        printf("strong");
    }
    else
    {
        printf("not");
    }
}
