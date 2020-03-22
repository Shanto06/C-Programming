#include<stdio.h>

int main()
{
    int a,i,sum;
    int num[5];
    sum=1;
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        sum=sum*num[i];
    }
     printf("sum of num is %d\n",sum);

    return 0;
}
