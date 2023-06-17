#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    char string[50];
    printf("Enter your name: ");
    gets(string);
    puts(string);

   int a; 
   a = strlen(string);
    printf("Total letters inputer are: %d", a);

    getch();
}