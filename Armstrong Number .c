
#include<stdio.h>

int main()
{
    int a,b,c,n,number,i=0,sum=0,remainder;
    scanf("%d",&number);
    n=0;
    c=number;
    while(c!=0)
    {
        c=c/10;
        n++;
    }
    c=number;

    while(c!=0)
    {
        remainder=c%10;
        sum=sum+pow(remainder,n);
        c/=10;
    }
    if(number==sum)
        printf("%d is armstrong number\n",number);
    else
         printf("%d is not armstrong number\n",number);
    return 0;
}

