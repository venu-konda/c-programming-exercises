#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j,l1,l2,l3;
int mydigit(char *);
int move(char *);
int main()
{
    char s[25],s1[25],s2[25];
    INPUT:
    printf("enter the input:");
    scanf("%s",s);
    if(mydigit(s))
    {
        printf("error please the numeric digit\n");
        goto INPUT;
    }
    strcpy(s1,s);
    // printf("%s",s1);
    move(s1);
    // printf("%s",s1);
    // printf("\n");
    l1=strlen(s1);
     if(s[l1]==' ')
    l1++;
    strcpy(s2,s+l1+1);
    // printf("%d",l1);
    int n1,n2,sum;
    n1=atoi(s1);
    n2=atoi(s2);
   
    if(s[l1]=='+')
    {
    sum=n1+n2;
    printf("%d",sum);
    }
    else if(s[l1]=='-')
    {
    sum=n1-n2;
    printf("%d",sum);
    }
    else if(s[l1]=='*')
    {
    sum=n1*n2;
    printf("%d",sum);
    }
    else if(s[l1]=='/')
    {
    sum=n1/n2;
    printf("%d",sum);
    }
    else if(s[l1]=='\n')
    printf("error you didn't supplied any operator");
}
int mydigit(char *p)
{
    for(p;*p;p++)
    if(!(((*p>='0')&&(*p<='9'))||(*p=='-')||(*p=='+')||(*p=='*')||(*p=='/')||(*p==' ')))
    return 1;
    return 0;
}

int move(char *p)
{
    int a=0;
    i=0;
    if(*p=='-')
    {
      i++;
      a=1;
    }
    for(i;;i++)
    if((p[i]=='+')||(p[i]=='-')||(p[i]=='*')||(p[i]=='/')||(p[i]==' '))
    break;
    p[i]='\0';
    
}



