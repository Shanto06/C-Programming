#include<stdio.h>

int main()
{
    int a,b;
    a=5,b=10;
    printf("Befor a=%d\tb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After a=%d\tb=%d\n",a,b);
    return 0;
}
