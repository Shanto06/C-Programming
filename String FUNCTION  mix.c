/**
    strchr(str,ch)
    strrchr(str,ch)
    strstr(str1,str2)
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="My name is taslim hossain shanto";
    int address,base;
    base=(int)(str);
    address=(int)strstr(str,"name");
       if(address==0)
          printf("Not found");
       else
            printf("found at %d",address-base+1);
    return 0;
}
