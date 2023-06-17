#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
    
    struct employee{
        int code;
        float salary;
        char name[40];
    };

void main()
{

    struct employee e1; 
        printf("Enter the code: ");
        scanf("%d",&e1.code);
        printf("\n");
        printf("Enter the salary: ");
        scanf("%f",&e1.salary);
        printf("\n");
        printf("Enter the name: ");
        scanf("%s",&e1.name);
        printf("\n");
    struct employee e2; 
        printf("Enter the code: ");
        scanf("%d",&e2.code);
        printf("\n");
        printf("Enter the salary: ");
        scanf("%f",&e2.salary);
        printf("\n");
        printf("Enter the name: ");
        scanf("%s",&e2.name);
        printf("\n");
    struct employee e3; 
        printf("Enter the code: ");
        scanf("%d",&e3.code);
        printf("\n");
        printf("Enter the salary: ");
        scanf("%f",&e3.salary);
        printf("\n");
        printf("Enter the name: ");
        scanf("%s",&e3.name);
        printf("\n");
 
        printf("code: %d ", e1.code);
        printf("\n");
        printf("Salary: %.2f", e1.salary);
        printf("\n");
        printf("Name: %s", e1.name);
        printf("\n");
        printf("code: %d ", e2.code);
        printf("\n");
        printf("Salary: %.2f", e2.salary);
        printf("\n");
        printf("Name: %s", e2.name);
        printf("\n");
        printf("code: %d ", e3.code);
        printf("\n");
        printf("Salary: %.2f", e3.salary);
        printf("\n");
        printf("Name: %s", e3.name);
        printf("\n");
        
    getch();
}