#include<stdio.h>

int main()
{
    int year,manths,days,manths1,n;
    printf("the days: ");
    scanf("%d",&days);
     year=days/360;
     manths1=days-year*360;
     printf("the year %d\n",year);
    manths=manths1/30;
    days=manths1-manths*30;
    printf("the manths %d\n",manths);
    printf("the days %d\n",days);
    return 0;
}
