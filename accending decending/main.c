#include<stdio.h>
int accending(int);
int decending(int);
int main()
{
    int data;
    scanf("%d",&data);
    if(accending(data)) printf("accending");
    else if(decending(data))printf("decending");
    else printf("not in order");
}
int accending(int var)
{
    int low=9,r;
    for(var;var;var/=10)
    {
        r=var%10;
        if(r<=low)
        low=r;
        else return 0;
    }
    return 1;
}
int decending(int var)
{
    int r,high=0;
    for(;var;var/=10)
    {
    r=var%10;
    if(r>=high)
    high=r;
    else return 0;
    }
    return 1;
    
}
