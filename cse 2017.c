#include<stdio.h>
#include<string.h>
struct cse17
{
    char name[50];
    int sid;
    double cgpa;
};
void print(struct cse17 student[])
{
    int i;

    for(i=0;i<10;i++)
    {
         printf("student name :%s\n",student[i].name);
         printf("student Id :%d\n",student[i].sid);
         printf("student CGPA :%lf\n",student[i].cgpa);
    }

}

int main()
{
    struct cse17 student[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }

    print(student);

    return 0;
}

