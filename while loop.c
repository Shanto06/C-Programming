#include <stdio.h>

int main()
{
    int a=1;
    while(a<=20){
    printf("%d\n",a);

        int x=1;
        while(x<=10){
            printf("%d * %d=%d\n",a,x,a*x);
            x++;
        }
        a++;
        printf("\n");
    }
    return 0;
}
