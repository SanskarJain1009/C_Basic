#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void goodmorning();
void goodafternoon();
void goodnight();

void main()
{
    printf("This Program Has 3 functions defined for greeting.\n");
    printf("These functions are goodmorning, goodafternoon and goodnight.\n");
    goodmorning();
    goodafternoon();
    goodnight();
    printf("All the functions are declared above in series.\n");
    getch();
}
void goodmorning()
{printf("Good Morning.\n");}
void goodafternoon()
{printf("Good Afternoon.\n");}
void goodnight()
{printf("Good Night.\n");}
