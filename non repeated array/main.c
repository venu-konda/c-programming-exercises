#include<stdio.h>

int
main ()
{
  {
    int n, count = 0;
    scanf ("%d", &n);
    // int a = (n < 1) ? +n : +n;
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf ("%d", &arr[i]);
    if (n <=0)
    {
      printf ("invalid size");
      return 0;
    }
    else if (n > 50)
    {
      printf ("Memory Overflow");
      return 0;}
    else
      {
	for (int i = 0; i < n; i++)
	  {
	    count = 0;
	    for (int j = 0; j < n; j++)
	      {
		if (arr[i] == arr[j])
		  {
		    count++;
		  }
		if (count < 2)

		  printf ("%d ", arr[i]);
	      }
	  }
	if (count == n)

	  printf ("no non-repeated elements");

      }
  }
}
