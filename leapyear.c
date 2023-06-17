#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter year=");
    scanf("%d", &a);
    if(a%4==0)
    {
        printf("Entered year is a leap year.");
    }
    else{
        printf("Entered year is not a leap year.");
    }
    return 0;
}