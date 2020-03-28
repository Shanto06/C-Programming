
#include<stdio.h>
#include<string.h>
int main()
{
    int ck;
    char n1[100],n2[100];
    while(scanf("%s%s",n1,n2)!=EOF)
    {

         if(strlen(n1)>strlen(n2))
             printf("A>B\n");
        else if(strlen(n1)<strlen(n2))
            printf("A<B\n");
        else if(strcmp(n1,n2)==0)
            printf("A=B\n");
        else if(strcmp(n1,n2)>0)
            printf("A>B\n");
        else
            printf("A<B\n");
    }
    return 0;
}

/**
#include<stdio.h>
#include<string.h>
int main()
{

    char n1[100]="BBB";
    char n2[100]="BBS";
    printf("%d",strcmp(n1,n2));
    return 0;

}
*/
