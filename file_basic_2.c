#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    FILE *ptr;
    ptr=fopen("Generated.txt", "w");
    int a=69;

    fprintf(ptr,"Tomb Stone Pile Driver (%d)",a);
    fclose(ptr);
        
    getch();
}