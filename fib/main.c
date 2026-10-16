#include<stdio.h>
int main()
{
    int i,j,a=1,max,min;
    scanf("%d",&min);
   // scanf("%d",&max);
    // for(i=0,j=1;a<=max;)
    for(i=0,j=1;a;)
    {
      // printf("%d ",a);
        a=i+j;
        i=j;
        j=a;
       // if((a>=min)&&(a<=max))
       // printf("%d ",a);
       if(a==min)
       printf("fib");
       fflush(stdout);
      }
    }


