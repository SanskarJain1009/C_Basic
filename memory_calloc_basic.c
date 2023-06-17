#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    int a;
    printf("Enter the number of elements you want-");
    scanf("%d", &a);
    int *ptr;
    ptr=(int *)calloc(a, sizeof(int));
    for(int i=0;i<a;i++)
    {
        printf("Enter element%d- ", i+1);
        scanf("%d", &ptr[i]);
        printf("%d", i);
    }
    for(int j=0;j<a;j++){
        printf("Value of elemnt%d- %d\n",j+1, ptr[j]);

    }


    getch();
}