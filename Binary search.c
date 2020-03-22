
#include<stdio.h>

int main()
{
    int start,end,mid,i,key,a[13]={12,23,30,32,38,42,50,60,65,70,85,90,100};
    start=0;
    end=12;
    key=32;
    do
    {
        mid=(int)((start+end)/2);
        printf("start:%d\tend:%d\tmid:%d\tkey:%d\ta[mid]\n",start,end,mid,key,a[mid]);
        if(a[mid]==key)
        {
            printf("find at %d\n",mid+1);
            break;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
        while(start<=end);
        if(start>end)
        printf("Faliad\n");

        return 0;
}
