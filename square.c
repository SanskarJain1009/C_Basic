#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sq(int *a);
void main()
{
    int d;
    printf("Enter the number whose square you want- ");
    scanf("%d", &d);
    printf("Square is %d", sq(&d));
    getch();
}
int sq(int *a)
{
    int b=*a;
    int c=b*b; 
    return c;

}