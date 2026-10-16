#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void mat1(int (*p)[20],int r,int c)
{
        int i,j;

                printf("matrix 1 =\n");
                for(i=0;i<r;i++)
                {
                        for(j=0;j<c;j++)

                        {
                                p[i][j]=rand()%10;
                                printf("%d ",p[i][j]);
                        }
                        printf("\n");
                }
}
void mat2(int (*q)[20],int r,int c)
{
        int i,j;

                printf("matrix 2 =\n");
                for(i=0;i<r;i++)
                {
                        for(j=0;j<c;j++)

                        {
                                q[i][j]=rand()%10;
                                printf("%d ",q[i][j]);
                        }
                        printf("\n");
                }
}
void mat3(int (*p)[20],int (*q)[20],int r,int c)
{
        int i,j;
        int s[r][c];
        printf("sum =\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        s[i][j]=p[i][j]+q[i][j];
                        printf("%3d ",s[i][j]);
                }
                printf("\n");
        }

}

int main()
{

        static int r,c;
        printf("enter rows(r) and col(c):");
        scanf("%d %d",&r,&c);
        int m1[r][20], m2[r][20];
        srand(getpid());
        {
                mat1(m1,r,c);
                mat2(m2,r,c);

        }
                mat3(m1,m2,r,c);
}