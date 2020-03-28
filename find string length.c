#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len=len+1;
    }
    printf("length of %s is %d\n",str,len);
}

