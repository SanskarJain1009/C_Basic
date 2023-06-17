#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int fib(int a);
void main()
{
    int a,b=1;
    printf("Enter the nth term till where you want your fibonacci series=\n");
    scanf("%d", &a);
    for(b;b<=a;b++)
    {
    printf("%d\n", fib(b));
    }
    getch();
}
int fib(int a)
{

    if(a==1)
    {
        return 0;
    }
    if(a==2 )
    {
        return 1;
    }

    else
    {
        return fib(a-1)+fib(a-2);
    }
}
