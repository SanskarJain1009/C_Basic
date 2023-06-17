#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void searchalphabet(char *a, char *b)
{   
    char *ptr=a;
    char c=*b;

    while(*ptr!='\0')
    {
        if (*ptr==c)
        {
            printf("It is present.");
            int i=1;
        }
        ptr++;
    }
}

void main()
{
    int i=0;
    char a[50];
    char b;
    printf("Enter your text:\n");
    gets(a);
    printf("Enter the character which you want to check is present or not: ");
    scanf("%c", b);
    searchalphabet(a, b);

    getch();
}