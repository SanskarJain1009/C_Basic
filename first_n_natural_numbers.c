#include<stdio.h>

int main()
{
    int a, b=1;
    printf("Enter the number till where you want your counting=");
    scanf("%d", &a);
    do
    {
        printf("%d\n", b);
        b++;
    }
    while(b<=a);

    return 0;
}