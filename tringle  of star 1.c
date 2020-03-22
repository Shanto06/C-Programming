#include<stdio.h>

int main()
{
    int i,n,j,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a+=2;
        printf("\n");
    }
    return 0;
}
