

/**
#include<stdio.h>
int main()
{
    int a,u;
    a=5;
    u=8;
    printf("a = %d and the address of a is %d\n",a,&a);
    printf("u = %d and the address of u is %d\n",u,&u);
    return 0;
}
*/
#include<stdio.h>

int main()
{   char c;
    char s1[]= "i am a student";
     char s2[]= "a";
     printf(strstr(s1,s2));
    return 0;
}


