#include<stdio.h>

int main()
{
    int a,i,sum=0;
    printf("the serise 1*1+2*2+3*3+.................+n*n\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of the serise %d\n",sum);
    return 0;
}
