#include<stdio.h>

int main()
{
    int n,sum;
    printf("the serise 1+(1+2)+(1+2+3)+............\n");
    scanf("%d",&n);
    sum=(n*(n+1)*(n+2))/6;
    printf("sum of the serise %d\n",sum);
    return 0;
}
