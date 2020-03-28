//coppy string as another string

#include<stdio.h>

int main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%s",s);
    while(1)
    {
        s1[i]=s[i];
        if(s[i]=='\0')
            break;
        i++;
    }
    s1[i]=s[i];
    printf("%s",s1);
}

/**
#include<stdio.h>

int main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0')
    {
        s1[i]=s[i];

        i++;
    }
    s1[i]=s[i];
    printf("%s",s1);
}
*/
