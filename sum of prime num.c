#include<stdio.h>

int main()
{
    int i,chack,j,T,m,n,sum,temp,a;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        sum=0;
        if(m>n)
            temp=m;
            m=n;
            n=temp;
        for(j=m;j<=n;j++)
        {
            a=j;
            chack=1;
            if(a==1)
                chack=0;
            for(i=2;i<a;i++)
            {
                if(a%i==0)
                    chack=0;
            }
            if(chack==1)
            {
                sum=sum+a;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
