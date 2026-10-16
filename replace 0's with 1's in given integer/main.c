#include<stdio.h>
int Extract (int);
int Replace (int, int *, int);
int Count (int);
int
main ()
{
  int data, temp, count;
  scanf ("%d", &data);
  count = Count (data);
  temp = Extract (data);
  printf ("%d", temp);
}

int
Extract (int a)
{
  int rem, i;
  static int rev = 0, *r;
  r = &rev;
  for (a, i = 1; a; a /= 10, i *= 10)
	{
	  rem = a % 10;
	  Replace (rem, r, i);
	}
  return rev;
}

int
Replace (int rem, int *rev, int i)
{
  if (rem == 0)
	rem = 1;
  *rev += rem * i;
}

int
Count (int a)
{
  static int count = 0;
  for (a; a; a /= 10)
	if (a % 10 == 0 || a == 0)
	  count++;
  return count;
}
