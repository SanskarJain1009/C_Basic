#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int factorial(int x);
void main()
{
    int a;
    printf("Enter Number-\n");
    scanf("%d", &a);
    
    printf("Factorial of %d is %d", a, factorial(a));
    getch();

}
int factorial(int x)
{
    if (x==1 || x==0)
    {return 1;}
    else
    {
        return x*factorial(x-1);
    }
}
