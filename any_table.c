#include<stdio.h>

int main()
{
    int a, c;
    printf("Enter number whose table you want=");
    scanf("%d" , &a);
    int b=1;
    while(b>0 && b<11)
    {
       c=a*b;
       printf("%d * %d =%d\n", a, b, c);
       b++;
    }


    return 0;
}