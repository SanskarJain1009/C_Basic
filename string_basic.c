#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
    printf("1.\n");
    char s[]={'S', 'A', 'N', 'S', 'K', 'A', 'R', '.', '\0'};
    printf("%s", s);
    printf("\n");
    printf("\n");

    printf("2.\n");
    char a[]="SANSKAR.";
    printf("%s", a);
    printf("\n");
    printf("\n");

    printf("3.\n");
    char b[]="SANSKAR.";
    for(int i=0; i<8; i++)
    {
    printf("%c\n", b[i]);
    }
    printf("\n");
    printf("\n");
    printf("4.\n");
    for(int i=0; i<8; i++)
    {
    printf("%c", b[i]);
    }
    printf("\n");
    
    // printf("5.\n");
    // char name[50];
    // printf("Enter your name(upto 50 letters): ");
    // scanf("%s", &name);
    // printf("You entered: %s\n ", name);
    // printf("\n");

    printf("6.\n");
    char nam[50];
    printf("Enter your name(upto 50 letters): ");
    gets(nam);
    puts(nam);
    getch();
}