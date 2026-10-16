#include<stdio.h>
int input (int *, int);
int print (int *, int);
int
main ()
{

  int n;
  scanf ("%d", &n);
  if (n < 1)
    {
      printf ("No of elements are invalid");
      return 0;
    }
  else
    {
      int arr[n];
      input (arr, n);
      char choice;
      scanf (" %c", &choice);
      int position, i;
      scanf ("%d", &position);
      for (i = 0; i < position; i++)
	{
	  int temp, j;
	  if (choice == 'l')
	    {
	      for (j = 0; j < n - 1; j++)
		{
		  temp = arr[j];
		  arr[j] = arr[j + 1];
		  arr[j + 1] = temp;
		}
	      arr[n - 1] = 0;
	    }
	  else if (choice == 'r')
	    {
	      for (j = n - 1; j > 0; j--)
		{
		  temp = arr[j];
		  arr[j] = arr[j - 1];
		  arr[j - 1] = temp;

		}
	      arr[0] = 0;

	    }

	}
      print (arr, n);
    }
}

int
input (int *p, int n)
{
  for (int i = 0; i < n; i++)
    scanf ("%d", &p[i]);
}

int
print (int *p, int n)
{
  for (int i = 0; i < n; i++)
    printf ("%d ", p[i]);

}
