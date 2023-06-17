#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void display();   //prototype
void main()
{
    printf("Display function initiated.\n");
    display();      //function call.
    printf("Function done.\n");
    display();   //function call.
    getch();
}
//function decleration.
void display()
{printf("This is display.\n");}    