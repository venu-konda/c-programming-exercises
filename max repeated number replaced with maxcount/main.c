#include<stdio.h>
int i,j,count;
void print(int *,int);
int main()
{
    int arr[]={1,2,4,5,5,5,1,2,2};
    int n=sizeof(arr)/sizeof(*arr);
    int maxcount=0,maxnum=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        
        if(count>maxcount)
        {
            maxcount=count;
            maxnum=arr[i];
        }
        else if(maxcount==count)
        {
            if(maxnum<arr[i])
            maxnum=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(maxnum==arr[i])
        arr[i]=maxcount;
    }
   print(arr,n);
}

void print(int *p,int n)
{
     for(i=0;i<n;i++)
    printf("%d ",p[i]);
}
