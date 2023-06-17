#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
    int a, b;
    printf("Enter the number of students you want to enter:\n");
    scanf("%d", &a);
    printf("Enter the number of subject marks you want to enter:\n");
    scanf("%d", &b);    
    int arr[a][b];
    for(int i=0; i<a;i++)
    {
        for(int j=0; j<b; j++)
        {
            printf("Enter the marks of student %d in subject %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            printf("\n");
        }
    }

        for(int i=0; i<a;i++)
    {
        for(int  j=0; j<b; j++)
        {
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, arr[i][j]);
        }
    }
    getch();
}