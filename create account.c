

#include<stdio.h>
#include<string.h>

struct create_account
{
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[50];
    struct birthday
    {
        int day;
        int month;
        int year;
    }birth;
    struct Sex
    {
        int male;
        int female;
    }sex;

};


int main()
{
    struct create_account user;
    char passck[50];
    char sexck[50];
    printf("Enter your first name: ");
    scanf("%s",user.first_name);
    printf("Enter your last name: ");
    scanf("%s",user.last_name);
    printf("Enter your username: ");
    scanf("%s",user.username);
    printf("Enter your password: ");
    scanf("%s",user.password);
    printf("Repeat your password: ");
    scanf("%s",passck);
    if(strcmp(user.password,passck)!=0)
    {
        printf("Do not match password\n");
        return 0;
    }
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
    printf("first name : %s\n",user.first_name);
    printf("last name : %s\n",user.last_name);
    printf("username : %s\n",user.username);
    printf("password : %s\n",user.password);
    printf("birthday: %d  %d  %d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("sex : ");
      if(user.sex.male==1)
        printf("Male\n");
      if(user.sex.female==1)
        printf("Female\n");
        return 0;
}


