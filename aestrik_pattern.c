#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void star(int a);
void main()
{
    int a;
    printf("Enter the number till the line you need pattern-");
    scanf("%d", &a);
    star(a);
    getch();
}
void star(int a)
{
    int b=1;
    if(a==1)
    {
        printf("*\n");
        return;
    }
    star(a-1);    
    for(b; b<=(2*a-1); b++)
    {printf("*");}
    printf("\n"); 
}