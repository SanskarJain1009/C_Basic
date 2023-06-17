#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
    int a;
    printf("Enter the table you want to store via array&pointer:\n");
    scanf("%d", &a);
    int arr[10];
    for(int i=0; i<10; i++)
    {
        arr[i]=a*(i+1);
        printf("%d*%d=%d\n", a, i+1, arr[i]);
    }
    
    for(int i=0; i<10; i++)
    {
        printf("Value stored in array %d: %d\n",i, arr[i]);
    }

    getch();
}