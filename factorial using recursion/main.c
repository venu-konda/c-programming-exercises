#include<stdio.h>
int factorial(int);
int fact=1;
int main()
{
    int data;
    scanf("%d",&data);
    printf("%d",factorial(data));
}

int factorial(int var)
{
    if(var==1)
    return var;
    return var*factorial(var-1);

}

