#include<stdio.h>
int main()
{
    int i,j,k,n,m,st,x,space,c;
    st=1;
    scanf("%d",&n);
    m=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
        m=m-1;
        for(j=1;j<=st;j++)
            printf("*");
            st+=2;
            printf("\n");
    }
    space=1;
    x=n-1;
    for(i=1;i<=x;i++)
    {
        for(k=1;k<=space;k++)

            printf(" ");
        space++;

        for(c=1;c<=(2*(n-i)-1);c++)
            printf("*");
        printf("\n");
    }
    return 0;

}
