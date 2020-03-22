#include <stdio.h>

int main()
{
    int a,n,m,x;
    for(a=1;a<=5;a++)
    {
        for(n=1;n<=a;n++)
        {
            printf("\n");
            for(x=1;x<=5;x++)
            {
                for(m=1;m<=x;m++)
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
