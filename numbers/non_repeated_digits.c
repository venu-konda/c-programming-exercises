#include<stdio.h>
int
main ()
{
  int data, i, temp, count, a;
  scanf ("%d", &data);
  
  int data1 = data;
  for (int i = data1; i = data1 % 10; data1 /= 10, count = 0)
    {
        temp = data;
      for (int j = temp; j = temp % 10; temp /= 10)
	{
	  if (i == j)
	    count++;
	}
      if (count == 1)
	printf ("%d", i);
    }

}

