#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pr;
    pr = (int *)malloc(10*sizeof(int));
    pr[1]=8;
    printf("%d\n",pr[1]);
    pr = (int *)realloc(pr,10*sizeof(int));
     printf("%d\n",pr[1]);
     free(pr);
    return 0;
}
