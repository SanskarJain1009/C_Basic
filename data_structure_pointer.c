#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee{
    int code;
    int salary;
    char name[40];
};

void main()
{
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    (*ptr).code=101;
    printf("%d", e1.code);
    printf("\n");
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);

    ptr->code=2;
    printf("%d",ptr->code);
    getch();
}