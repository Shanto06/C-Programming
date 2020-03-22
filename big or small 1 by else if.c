#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                printf("%d",a);
            else
                printf("%d",d);
        }
        else
        {
            if(c>d)
                printf("%d",c);
            else
                printf("%d",d);
        }
    }
    else
    {
        if(b>c)
        {
            if(c>d)
                printf("%d",c);
            else
                printf("%d",d);
        }
        else
        {
            if(c>d)
                printf("%d",c);
            else
                printf("%d",d);
        }
    }
    return 0;
}
