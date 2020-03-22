#include <stdio.h>

int main()
{
    int a,n,L;
    scanf("%d%d",&a,&n);
    for(L=1;L<=a*n;L++)
        if(L%a==0 && L%n==0)
        break;
        printf("LCM is %d\n",L);
        return 0;

}
