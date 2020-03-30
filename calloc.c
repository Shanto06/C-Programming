#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pr;
    pr=(int*)calloc(10,sizeof(int));
    pr[1]=4;
    printf("%d\n",pr[1]);

    pr=(int*)calloc(120,sizeof(int));
    pr[1]=7;
    printf("%d\n",pr[1]);
    return 0;
}
