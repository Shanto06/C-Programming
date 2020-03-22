// pow(3,3)=27 last digit 7
//// pow(3,4)=81 last digit 1


#include<stdio.h>

int main()
{
    int n;
    int values[4]={1,3,7,9};
    scanf("%d",&n);
    n=n%4;
    printf("%d\n",values[n]);
    return 0;
}

