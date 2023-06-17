#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a;

    printf("Enter the number of students marks you want to enter: ");
    scanf("%d", &a);
    int arr[a];

    for(int i=0; i<a; i++)
    {
   
    printf("Enter the marks of student %d: ",i+1);
    scanf("%d", &arr[i]);
       
    }
    
    for(int i=0; i<a; i++)
    {
        
    printf("The marks of student %d: %d\n ",i+1, arr[i]);
    }
    getch();
}