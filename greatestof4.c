#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter first number-\n");
    scanf("%d", &a);
    printf("Enter second number-\n");
    scanf("%d", &b);
    printf("Enter third number-\n");
    scanf("%d", &c);
    printf("Enter fourth number-\n");
    scanf("%d", &d);

if(a>b && a>c && a>d)
    {printf("Greatest integer is- %d \n", a);}
if(b>a && b>c && b>d)
    {printf("Greatest integer is- %d \n", b);}
if(c>b && c>a && c>d)
    {printf("Greatest integer is- %d \n", c);}
if(d>b && d>c && d>a)
    {printf("Greatest integer is- %d \n", d);}
    return 0;
}