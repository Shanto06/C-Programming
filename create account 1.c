

#include<stdio.h>
#include<string.h>

 struct birthday
    {
        int day;
        int month;
        int year;
    };

     struct Sex
    {
        int male;
        int female;
    };

struct Student
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;


};

struct Teacher
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;
    int salary;


};



int main()
{
    struct Teacher user;
    char passck[50];
    char sexck[50];
    printf("Enter your first name: ");
    scanf("%s",user.first_name);
    printf("Enter your last name: ");
    scanf("%s",user.last_name);


    printf("Enter your birthday: ");
    printf("\tday : ");
    scanf("%d",&user.birth.day);
    printf("\tmonth : ");
    scanf("%d",&user.birth.month);
    printf("\tyear : ");
    scanf("%d",&user.birth.year);
    printf("Enter your sex (if male press m elae press f) :");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0 || strcmp(sexck,"M")==0 )
    {
        user.sex.male=1;
        user.sex.female=0;
    }
    else if(strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0)
    {
        user.sex.male=0;
        user.sex.female=1;
    }
    else
    {
        printf("you have pressed wrong key\n");
        return 0;
    }

    printf("Enter your Salary: \n");
    scanf("%d",user.salary);
    printf("first name : %s\n",user.first_name);
    printf("last name : %s\n",user.last_name);

    printf("birthday: %d  %d  %d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("sex : ");
      if(user.sex.male==1)
        printf("Male\n");
      if(user.sex.female==1)
        printf("Female\n");
        return 0;
}



