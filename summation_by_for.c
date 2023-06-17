#include<stdio.h>

int main()
{
    int a, c=0;
    printf("Enter number till where summation needed=");
    scanf("%d", &a);
    for(int b=0; b<=a; b++)
    {
        c=b+c;
    }
    printf("Summation is-%d\n", c);
    return 0;
}