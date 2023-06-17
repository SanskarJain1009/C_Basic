#include<stdio.h>

int main()
{
    int a, b, c=1;
    printf("Number whose factorial you want=");
    scanf("%d", &a);
    
        for(b=1; b<=a; b++)
            {
                c=b*c;
            }
        printf("Factorial is=%d\n", c);

    return 0;
}