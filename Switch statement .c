#include<stdio.h>

int main()
{
    int num;

    printf("Enter the value of:");
    scanf("%d",&num);
    switch(num)
    {
        case 10:
            printf("number is 10\n",num);
            break;
        case 9:
            printf("number is 9\n",num);
            break;
        case 8:
            printf("number is 8\n",num);
            break;
        case 7:
            printf("number is 7\n",num);
            break;

    }
    return 0;
}
