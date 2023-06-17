#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    system("cls");
    int a;

    srand(time(0));
    a=rand()%100+1;
    printf("Your random number is=%d\n", a);
    getch();
}