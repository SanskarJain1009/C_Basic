#include<stdio.h>

int main()
{
    int a,b=0, c=0;
    printf("Enter number till where summation needed=");
    scanf("%d", &a);
    while(b<=a)
    {
        c=b+c;
        b++;
    }
    printf("Summation is-%d\n", c);
    return 0;
}