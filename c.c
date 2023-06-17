#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

    struct employee
    {
        int code;
        float salary;
        char name[40];
    };

void main()
{       
        struct employee e[50];
        int a;
        for(int i=0; i<=50; i++)
        { 
        printf("Enter the code: ");
        scanf("%d",&e[i].code);
        printf("\n");
        printf("Enter the salary: ");
        scanf("%f",&e[i].salary);
        printf("\n");
        printf("Enter the name: ");
        scanf("%s",&e[i].name);
        printf("\n");
        }

        for(int j=0;j<=50;j++)
        {
        printf("code: %d ", e[j].code);
        printf("\n");
        printf("Salary: %.2f", e[j].salary);
        printf("\n");
        printf("Name: %s", e[j].name);
        printf("\n");
        }
    getch();
}