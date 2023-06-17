#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void input(char (*a)[10], int *x)
{   
    // char *(b)[10]=&a;
    // int *y=&x;
    char c[10];
    printf("Enter the name of the Employee-\n");
    scanf("%s", &c);
    strcpy(*a,c);
    
    printf("Enter the salary of the Employee-\n");
    scanf("%d", &(*x));

}
void main()
{   
    system("cls");
    int x,y;
    char a[10];
    char b[10];

    FILE *ptr;
    ptr=fopen("Details.txt", "w");
    
    input(&a, &x);
    input(&b, &y);
    
    fprintf(ptr, "Name of Employee 1=%s",&(*a));
    fprintf(ptr, "\t Salary=%d", x);

    fprintf(ptr, "\nName of Employee 2=%s",b);
    fprintf(ptr, "\t Salary=%d", y);
    
    fclose(ptr);  

    getch();
}