#include<stdio.h>

int main()
{
    char a;
    printf("Enter your alphabet=");
    scanf("%c", &a);

    if(a>96 && a<123)
    {printf("Your alphabet is lower case.");}
    else{
        printf("Your alphabet is not lower case.");
    }
    return 0;
}