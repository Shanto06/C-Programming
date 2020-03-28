
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length=0,j,i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length=length+1;
    }


    for(j=length;j>=0;j--)
    {
        printf("%c",str[j]);
    }


}

