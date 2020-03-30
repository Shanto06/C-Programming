#include<stdio.h>
#include<string.h>


struct mystructure
{
    int x;
    float y;
};

void print(struct mystructure pr)
{
    printf("x = %d\n",pr.x);
    printf("y = %f\n",pr.y);
}

struct mystructure add(struct mystructure a,struct mystructure b)
{
    struct mystructure result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
};

int main()
{
    struct mystructure  men,men1,sum;
    men.x=5;
    men.y=6.6;
    printf("Befor assign\n");
    print(men);
    print(men1);
    men1=men;
    printf("After assign\n");
    print(men);
    print(men1);

    sum=add(men,men1);
    printf("sum\n");
    print(sum);
    return 0;
}
