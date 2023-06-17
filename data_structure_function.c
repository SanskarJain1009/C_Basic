//Call by Value.

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee{
    int code;
    int salary;
    char name[10];
};
void print(struct employee e)
{
    printf("Code is : %d\n",e.code);
    printf("Salary is : %d\n",e.salary);
    printf("Name is : %s\n",e.name);
}

void main()
{
    struct employee e1;
    e1.code=1;
    e1.salary=100;
    strcpy(e1.name,"Sanskar");
    print(e1);

    struct employee e2;
    e2.code=2;
    e2.salary=200;
    strcpy(e2.name,"Sambhav");
    print(e2);
    getch();
}