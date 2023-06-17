#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);
void main()
{
    int a, b;
    printf("Enter first number=\n");
    scanf("%d", &a);
    printf("Enter second number=\n");
    scanf("%d", &b);
    
    printf("Value of first & second number before swaping is %d & %d\n", a, b);

    // below reated two logic for calling 2 different functions wrong_swap and swap.
    // uncomment any one to run program.

    //1. CALL BY VALUE.
    // printf("Calling wrong_swap function(calling by value).\n");
    // wrong_swap(a, b);
    // printf("Value of a and b after swapping is %d & %d", a, b);

    //2. CALL BY REFERENCE. 
    printf("Calling swap function.\n");
    swap(&a, &b);
    printf("Value of first and second number is %d & %d", a, b);


    getch();
}
// void wrong_swap(int a, int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
void swap(int *a, int *b)
{
    int temp;
    temp= *a;
    *a= *b;
    *b=temp;
}