#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void encrypt(char *a)
{
    char *c=a;
    while(*c!='\0')
    {
        *c=*c+1;    
        c++;
    }
}

void main()
{
    char a[50];
    printf("Enter your text(upto 50 characters.)");
    gets(a);
    encrypt(a);
    printf("Your encrypted text is: %s", a);
    
    getch();
}