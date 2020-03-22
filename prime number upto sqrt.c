#include<stdio.h>

int main()
{
    int a,i,j,n,chack;
    scanf("%d",&n);
    if(n==1)
        printf("%d is not prime\n",n);
    else
    {
        chack=1;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            chack=0;
        }
        if(chack==1)
            printf("%d is prime\n",n);
        else
            printf("%d is not prime\n",n);
    }
    return 0;
}
