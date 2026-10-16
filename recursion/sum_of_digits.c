#include<stdio.h>
int sumDigits (int);
int
main ()
{
  int data;
  scanf ("%d", &data);
  int sum = sumDigits (data);
  printf ("sum=%d", sum);
}

// int sumDigits (int var)
// {
//   if (var == 0)
//     return var;
//   return (var % 10 + sumDigits (var / 10));

// }
int sumDigits(int var)
{
    if(var)
    return ((var%10)+sumDigits(var/10));
return 0;
}
