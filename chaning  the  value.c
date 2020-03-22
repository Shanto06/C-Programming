#include<stdio.h>

int main()
{
    int a,b,c,d;
    a=8,b=9;
    printf("Befor interchange a = %d  b = %d\n",a,b);
    c=a;
    d=b;
    a=d;
    b=c;
    printf("After interchange a = %d  b = %d\n",a,b);
    return 0;
}
