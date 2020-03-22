#include<stdio.h>

int main()
{
    int a[2][2]={1,2,3,4};
    int c[2][2];
    int b[2][2]={5,6,7,8};
    int temp,i,j,n,m,sum,k,p;
    m=n=p=2;
    printf("Matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            {
                sum=sum+a[i][j]+b[i][j];
            }
            c[i][j]=sum;
        }
    }

    printf("Matrix C\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}

