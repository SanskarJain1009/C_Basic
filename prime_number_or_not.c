#include<stdio.h>

int main()
{
    int a, b, c=0;
    printf("Enter your number=");
    scanf("%d", &a);
    for(b=2; b<a; b++)
    {
       if(a%b==0)
       {
            printf("It is not a prime.\n");
            c=1;
            break;

        }

    }
    if(c==0)
    {printf("It is a prime.\n");}
    return 0;
}