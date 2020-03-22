#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,m,k=0,l,p=0,o,a,b=0,c=0;
     m='G';
     o='F';
    for(j=1;j<=7;j++)
     {
        for(i='A';i<=(m-k);i++)
        {
            printf("%c",i);
        }
        for(a=1;a<b;a++)
        {
            printf(" ");
        }

     for(l=(o-p);l>='A';l--)
     {
      printf("%c",l);
     }
     p=p+c;
     b=b+2;
     k=k+1;
     c=1;
     printf("\n");
     }
}

