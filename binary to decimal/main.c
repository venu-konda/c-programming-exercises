#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int power (int, int);
int isBinary (char *);
int
main ()
{
  char s[33];
INPUT:
  printf ("enter the binary data:");
  scanf ("%s", s);
  if (!(isBinary (s)))
	{
	  printf ("error\n");
	  goto INPUT;
	}
  int l1, i, sum = 0, num, rem;
  l1 = strlen (s);
  num = atoi (s);
  for (i = 0; i <= l1; num /= 10, i++)
	{
	  rem = num % 10;
	  sum += (rem * power (2, i));
	}
  printf ("decimal=%d\noctal=%o\nhexa=%x", sum, sum, sum);


}

int
isBinary (char *p)
{
  for (p; *p; p++)
	{
	  if (!((*p == '1') || (*p == '0')))
		return 0;
	}
  return 1;
}

int
power (int a, int i)
{
  int max = 1;
  for (i; i; i--)
	max *= a;
  return max;
}
