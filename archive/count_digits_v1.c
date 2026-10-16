#include<stdio.h>
int countDigits(int);
int count=0;
int main()
{
    int data;
    scanf("%d",&data);
    printf("%d",countDigits(data));
}

int countDigits(int var)
{
    if(var/10)
    {
        count++;
        countDigits(var/10);
        
    }
}