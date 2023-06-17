#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    char a[50], b[50];
    printf("Enter your first name: ");
    scanf("%s", a);
    printf("Enter your first name again: ");
    scanf("%s", b);
    int c=strcmp(a, b);
    if(c!=0)
    {
        printf("You have entered the name incorrect.");
    }
    getch();
}