#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    char *str;
    str = (char*)calloc(5,1);
    strcpy(str,"abcde");
    printf("%s\n",str);

      free(str);

     str = (char*)realloc(str,50*1);
    strcpy(str,"abcde");
    printf("%s\n",str);

    free(str);

    return 0;

}
