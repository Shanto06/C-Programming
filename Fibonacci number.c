#include<stdio.h>

int main()
{
    int a,b,n,i,T,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
         a=0,b=1;
        for(i=1;i<=n;i++)
        {

            printf("%d\n",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}
