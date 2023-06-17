#include<stdio.h>

int main()
{
    float p,r,t;
    
    
    printf("Enter Principle :");
    scanf("%f", &p);

    printf("Enter Rate :");
    scanf("%f", &r);

    printf("Enter Time Period :");
    scanf("%f",&t);
    
    float Interest=(p*r*t)/100;
    float amount=Interest+p;
    printf("Interest is :%f\n", Interest);
    printf("Amount to be Paid : %f\n", amount);


    return 0;
}