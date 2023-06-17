#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
    int b;
    printf("Enter the number of students marks you want to enter: ");
    scanf("%d", &b);
    int a[b];
    int *c=&a[0];

    for(int i=0;i<b;i++)
    {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", c);
        c++;
    }
    for(int i=0;i<b;i++)
    {
    printf("Marks of student %d : %d\n",i+1, a[i]);
    }

    getch();
}