//Call By Reference.
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee{
    int code;
    int salary;
    char name[10];
};
void print(struct employee *e)
{
    struct employee emp;
    emp=*e;
    printf("Code is : %d\n", emp.code);
    printf("Salary is : %d\n", emp.salary);
    printf("Name is : %s\n", emp.name);
    e->code=24;
    //Above operation changes value which shows Call by Reference.
}
void main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=1;
    ptr->salary=1000;
    strcpy(ptr->name,"Sanskar");
    print(ptr);
    printf("Code : %d", e1.code);
}