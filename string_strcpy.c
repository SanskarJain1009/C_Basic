#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    char *source="SANSKAR.";
    char target[40];
    printf("Source is: %s\n", source);
    strcpy(target, source);
    printf("Now target is copied as: %s\n", target);

    getch();
}