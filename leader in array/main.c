

#include<stdio.h>
int highest (int *, int, int);
int
main ()
{
  int n;
  scanf ("%d", &n);
  if (n < 1)
    {
      printf ("Invalid size");
      return 0;
    }
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);
  for (int i = 0; i < n; i++)
    {
      highest (arr, n, i);
    }
    printf("%d",arr[n-1]);
}

int
highest (int *ptr, int n, int i)
{
// int high=ptr[i];
  int j, p[j], cnt = 0;

  for (j = i; j < n; j++)
    {
      if (ptr[i] > ptr[j])
	{
	  cnt++;
	  if (cnt ==n-(i+1))
	    {
	      printf ("%d ", ptr[i]);
	    }
	}
    }
}

