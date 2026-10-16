
#include <stdio.h>
int venu(int);
int even(int);
int digit(int);
int main()
{
  int data,max,min;
  scanf("%d",&min);
  scanf("%d",&max);
  for(data=min;data<=max;data++)
  {
      if((venu(data))&&(digit(data)))
      printf("%d,",data);
  }
}
int venu(int data)
{
    int bit,count=0;
    for(bit=31;bit>=0;bit--)
    {
        if((data>>bit)&1)
        count++;
    }
       if(count%2==0)
        return 1;
        return 0;
}
int digit(int data)
{
    if(data%10==4)
    return 1;
    return 0;
}