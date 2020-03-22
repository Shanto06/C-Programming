#include<stdio.h>

int main()
{
    int a[5]={7,2,6,4,9};
    int i,j,n=5,m,k,temp;
    i=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)

    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }

    }
    for(k=0;k<n;k++)
        printf("%d\n",a[k]);

    }
    return 0;
}
