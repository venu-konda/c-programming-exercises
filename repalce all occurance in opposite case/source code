#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
char *oppCase (const char *);
int
main ()
{

  char s1[100], s2[100], *p, *q, flag = 0;
  __fpurge (stdin);
  fgets (s1, 100, stdin);
  __fpurge (stdin);
  fgets (s2, 100, stdin);
//scanf("%[^\n]s", s2);
// _fpurge(stdin);
// gets(s1);
// _fpurge(stdin);
// gets(s2);
// s1[strlen(s1)-1]='\0';
// s2[strlen(s2)-1]='\0';
  p = s1;
  while (p = strstr (p, s2))
	{
	   q=oppCase(s2);
	  if (!(strcmp (p, s2)))
	  {
		strncpy (p, q, strlen (s2));
	  flag = 1;
// p+=strlen(s2)-1;
	}
  if (flag == 1)
	{
	  printf ("%s", s1);
	  return 0;
	}
  else
	{

	  printf ("sub string not found");
	  return 0;
	}
}

char *
oppCase (const char *p)
{

  static char temp[50];
  int i = 0;
  for (p; *p; p++, i++)
	{
	  temp[i] = *p ^ 32;
	}
  temp[i] = '\0';
  return temp;
}
