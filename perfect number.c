#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("the number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
        printf("%d is a perfect number\n",n);
    else
        printf("%d is not a perfect number\n",n);
        return 0;
}
