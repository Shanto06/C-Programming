#include<stdio.h>

int main()
{
    int a,array[100],loc,i,cas=1,key,ck,n,T;
    while(scanf("%d",&n)!=EOF)
    {

        for (i=0;i<n;i++)
        scanf("%d",&array[i]);
        scanf("%d",&key);

        ck=0;
        for(i=0;i<n;i++)
        {
        if(array[i]==key)
            {
            ck=1;
            loc=i+1;
            break;

            }
        }

        printf("cas# %d: ",cas);
        cas++;

        if(ck==1)
            printf("%d\n",loc);
        else
            printf("No\n");
    }
    return 0;
}
