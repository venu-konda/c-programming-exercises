
#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
int test_unique(char *,int);
int main()
{
     srand(getpid());
    char arr[20];
    int n=20,i;
   
    for(int i=0;i<n;i++)
    {
    arr[i]=rand()%26+65;
    if(!test_unique(arr,i))
    i--;
    }
    for(int i=0;i<n;i++)
    printf("%c ",arr[i]);
}
int test_unique(char *p,int n)
{
   
    for(int j=0;j<n;j++)
    {
        if(p[n]==p[j])
        return 0;
    }
    return 1;
}

