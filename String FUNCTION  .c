// STRING FUNCTION strlen strcpy strcat strcam

#include<stdio.h>
#include<string.h>
int main()
{
    int ln;
    char s[100];
    scanf("%s",s);
    ln=strlen(s);
    printf("%d",ln);
    return 0;
}

                    //strcpy

/**
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    scanf("%s",s);
    strcpy(s1,s);
    printf("%s",s1);
    return 0;
}
*/

 /**                   //strcat
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    scanf("%s%s",s,s1);
    strcat(s, " ");
    strcat(s,s1);
    printf("%s",s);
    return 0;
}
*/
                        //strcmp
/**
#include<stdio.h>
#include<string.h>
int main()
{
    int ck;
    char s[100],s1[100];
    scanf("%s%s",s,s1);
    ck=strcmp(s,s1);
    if(ck==0)
        printf("same");
    else
        printf("Not same");

    return 0;
}
*/




