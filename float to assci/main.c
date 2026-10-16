#include<stdio.h>
#include<string.h>
#include<ctype.h>
void strRev(char *p,int l)
{
    int temp,i;
    for(i=0;i<l/2;i++)
    {
        temp=p[i];
        p[i]=p[l-i-1];
        p[l-i-1]=temp;
    }
}
int
main ()
{
  //float f;
  double b,f;
  scanf ("%lf", &f);
  int i = 0, j, r,a,x,flag=0;
  if(f<0)
  {
      f=-(f);
      flag=1;
  }
  char s[100],s1[100], *p;
  
  j = f,x=f;
  
   	 printf("\n%d\n",j);
   	
  for (j; j; j /= 10,i++)
	{
	    r=j%10;
	  s[i]=r+48;
	}
	strRev(s,strlen(s));
	if(flag)
	{
	    memmove(s+1,s,strlen(s)+1);
	    s[0]='-';
	    i++;
	}
	s[i]='.';
	i++;
	s[i]=0;
	a=(f-x)*1000000;
 //	printf("\n%d\n",j);
// 	a=b*1000000;
// 	printf("\n%d\n",a);
	for(i=0;a;i++,a/=10)
	{
	    r=a%10;
	  s1[i]=r+48;
	}
	strRev(s1,strlen(s1));
	s1[4]=0;
	strcat(s,s1);
	
  printf ("%s", s);
//   printf ("%s", s1);
 }
