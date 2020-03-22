// 1+2*2+3*3*3+4*4*4*4+5*5*5*5*5+..........

#include<stdio.h>

int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,i);

    }
    printf("%d\n",sum);
    return 0;
}
