#include<stdio.h>
/*
///using global variable

int m,p,q,o;

void abc(int a, int b)
{

    m=a+b;
    p=a-b;
    q=a*b;
    o=a/b;
}
*/
///using pointer

void abc(int a, int b,int *sum,int *mult,int *sub,int *div )
{

    *sum=a+b;
    *sub=a-b;
    *mult=a*b;
    *div=a/b;

}

int main()
{

    int sum,mult,sub,div,x,y;
    scanf("%d%d",&x,&y);
    abc(x,y,&sum,&mult,&sub,&div);
    //sum=m;sub=p;mult=q;div=o;
    printf("%d %d %d %d\n",sum,sub,mult,div);
    return 0;
}
