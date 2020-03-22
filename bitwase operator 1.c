#include<stdio.h>

int main()
{
    int a=5,b=6;
    double c;
    c=(double) a/b;

    printf( "%lf %d %d",c,a%b,a^b);
    return 0;
}
