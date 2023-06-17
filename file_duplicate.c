#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    int b,c,d,e;
    char a[20];
    
    FILE *original;
    original=fopen("sample2.txt", "r");
    fscanf(original, "%s", &a);
    fclose(original);
    
    FILE *duplicate;
    duplicate=fopen("duplicate.txt", "w");
    fprintf(duplicate,"%s", a);
    fclose(duplicate);
}