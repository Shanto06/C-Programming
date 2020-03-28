#include<stdio.h>
#include<string.h>
int main()
{
    char str[90]="bangla",str1[90]="desh";
    int i,j;
    for(i=6,j=0;str1[j]!='\0';i++,j++)
    {
        str[i]=str1[j];
    }
    //str[i]='\0';
    printf("%s\n",str);
}
