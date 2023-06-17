#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    char a[]="Sanskar.";
    char b[]="Sanskar.";
    char c[]="Jain.";
    char d[]="Xeotye.";
    int g, e, f;
    g = strcmp(a, b);
    printf("%d\n", g);
    e = strcmp(a,c);
    printf("%d\n", e);
    f= strcmp(b, d);
    printf("%d\n", f);
    getch();
}