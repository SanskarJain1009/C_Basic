#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    int a;
    FILE *ptr;
    ptr=fopen("number.txt","r");
    fscanf(ptr, "%d", &a);
    fclose(ptr);

    FILE *modified;
    modified=fopen("number2.txt", "w");
    fprintf(modified, "%d", a*109);
    fclose(modified);

    getch();
}