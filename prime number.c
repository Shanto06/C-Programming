#include<stdio.h>

int main()
{
    int n,a,i,chack;
    scanf("%d",&n);
    if(n==1)
        printf("The number is not  prime %d\n",n);
        else
    {


    chack=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           chack=0;
            break;
        }


    }
    if(chack==1)
            printf("The number is  prime %d\n",n);

        else
            printf("The number is not  prime %d\n",n);
    }
}
