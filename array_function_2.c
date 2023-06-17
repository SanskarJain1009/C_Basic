#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void printarr(int ptr[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf("Marks of student %d: %d\n",i+1, ptr[i]);
    }
    ptr[4] = 5478;
}
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printarr(arr, 10);
    printf("%d", arr[4]);
    getch();
}