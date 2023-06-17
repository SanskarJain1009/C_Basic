#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int x10(int *a);
void main()
{
    int a;
    printf("Enter value =\n");
    scanf("%d", &a);
    printf("%d*10=%d\n",a, x10(&a));

    getch();
}
int x10(int *a)
{
    int b;
    b=*a*10;
    return b;
}