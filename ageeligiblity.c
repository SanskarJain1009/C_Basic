#include<stdio.h>

int main()
{
    int a;
    printf("Age is-");
    scanf("%d", &a);
    
    if (a<=18)
    {printf("Not eligible.\n");}
    
    else
    {printf("Eligible\n");}

    return 0;
}