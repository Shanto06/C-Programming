#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int ln,ck,half,i,j;
    while(scanf("%s",str)!=EOF)
    {
        ln=strlen(str);
        half=ln/2;
        ln=ln-1;
        ck=1;
        for(i=0;i<half;i++)
        {
            if(str[i]!=str[ln-i])
            {
                ck=0;
                break;
            }
        }
        if(ck)

            printf("palindrome\n");
        else
            printf("Not palindrome\n");

    }

    return 0;
}
