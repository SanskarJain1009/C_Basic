#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int fib(int a);
void main()
{
    int a,b,c;
    printf("Enter the nth term till where you want your fibonacci series=\n");
    scanf("%d", &a);
    printf("%d\n", fib(a));
    getch();
}
int fib(int a)
{

    if(a==1)
    {
        return 0;
    }
    if( a==3 ||  a==2 )
    {
        return 1;
    }

    else
    {
        return fib(a-1)+fib(a-2);
    }
}
