#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    char a=fgetc(ptr);
    char b=fgetc(ptr);
    char c=fgetc(ptr);
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    printf("%c\n", fgetc(ptr));
    printf("%c\n", fgetc(ptr));
    printf("%c\n", fgetc(ptr));
    printf("%c\n", fgetc(ptr));
    printf("%c\n", fgetc(ptr));
    printf("%c\n", fgetc(ptr));
    fclose(ptr);

    FILE *pttr;
    pttr=fopen("Generated2.txt", "w");
    putc('c', pttr);
    fclose(pttr);

    FILE *ptrr;
    ptrr=fopen("sample2.txt", "r");
    char text;
    while(text!=EOF)
    {
        text=fgetc(ptrr);
        printf("%c",text);
    }
    fclose(ptrr);
    getch();
}