#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    FILE *ptr;
    ptr=fopen("sample.txt", "r");
    
    char text;
    char text2;
    char text3[10];
    char text4[10];
    fscanf(ptr,"%c",&text);
    printf("%c\n", text);
    fscanf(ptr,"%c",&text2);
    printf("%c\n", text2);
    fscanf(ptr,"%s",&text3);
    printf("%s\n", text3);
    fscanf(ptr,"%s",&text4);
    printf("%s\n", text4);

    fclose(ptr);

    getch();
}