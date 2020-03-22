/*
// palindrome madam,did

#include<stdio.h>
#include<string.h>
int main()
{
    int i,len=0,j,k=0;
    char nam[100],a[90];
    scanf("%s",nam);
    for(i=0;nam[i]!='\0';i++)
    {
        len=len+1;
    }

    for(j=len-1;j>=0;j--)
    {
        a[k]=nam[j];
        k++;
    }
    a[k]='\0';
    if(strcmp(a,nam)==0)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,ck=1;
    char nam[90];
    scanf("%s",nam);
    len=strlen(nam);
    j=len/2;
    len=len-1;
    for(i=0;i<j;i++)
    {
        if(nam[i]!=nam[len-i])
        {
            ck=0;
            break;
        }

    }
    if(ck)
       printf("palindrome\n");
    else
        printf("not palindrome\n");
}
