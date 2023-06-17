#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int sum(int a, int b);
void main()
{
    int a, b, c;
    printf("This function is to add via use of parameter function.\n");
    printf("Enter number-\n ");
    scanf("%d", &a);
    printf("Enter number-\n ");
    scanf("%d", &b);
    c=sum(a, b);
    printf("Sum is-\n%d\n", c);
    getch();
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}