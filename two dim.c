#include<stdio.h>
int main()
{
    int c,r;
    double maths[2][5];
    for(c=0;c<2;c++)
    {
        for(r=0;r<5;r++)
        {
            scanf("%lf",&maths[c][r]);
        }
    }
    for(c=0;c<2;c++)
    {
        for(r=0;r<5;r++)
        {
            printf("class %d Roll %d marks %lf\n",c+6,r+1,maths[c][r]);
        }
    }
    return 0;
}
