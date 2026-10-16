#include<stdio.h>
int main ()
{
  int n, count, flag = 0;
  scanf ("%d", &n);
  if (n < 1)
    {
      printf ("invalid size");
      return 0;
    }
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);

  for (int i = 0; i < n; i++)
    {
      count = 0;
      for (int j = i+1; j < n; j++)
	{
// 	  if (j < 1)
// 	    {
// 	      if (arr[i] == arr[j])
// 		break;
// 	    }
	  if (arr[i] == arr[j])
	    {
	      count++;
//flag=1;
	    }
	}
	  if (count > 1)
	    {
	      printf ("%d ", arr[i]);
	      flag = 1;
	    }
	  if (flag == 0)
	    {

	      printf ("no repeated elements");
	      return 0;
	    }
	}
	
}

