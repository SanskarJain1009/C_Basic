#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int arr[5];

    printf("Enter the first number: ");
    scanf("%d", &arr[0]);
    printf("Enter the second number: ");
    scanf("%d", &arr[1]);
    printf("Enter the third number: ");
    scanf("%d", &arr[2]);
    printf("Enter the fourth number: ");
    scanf("%d", &arr[3]);
    printf("Enter the fifth number: ");
    scanf("%d", &arr[4]);
    
    printf("\nEntered numbers are:\n");
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    getch();
}