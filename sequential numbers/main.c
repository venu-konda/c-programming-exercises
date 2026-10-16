#include <stdio.h>

int main()
{
    int min,max,i,n,j,r,c1,c2,r1;
    scanf("%d %d",&min,&max);
    for(i=min;i<=max;i++)
    {
        c1=0,c2=0;
        for(j=i;j;j/=10)
        {
            c1++;
            r=j%10;
            if(r==((j/10)%10)+1)
            {
              c2++;
              r1=r;
            }
            
        }
        if(j==0)
            if(r+1==r1)
            c2++;
        if(c1==c2)
        printf("%d ",i);
    }
}

