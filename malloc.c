#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *pr;
    ///pr=malloc(3);

    pr=malloc(sizeof(int));
    printf("%d\n",pr);



    return 0;
}
