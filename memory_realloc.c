#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{
    float *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter %d float element=", i+1);
        scanf("%f", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Value of %d float element= %.2f", i+1, ptr[i]);
        printf("\n");
    }

    printf("Realloc Initiated.\n");
    
    ptr=realloc(ptr,5*sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter %d float element=", i+1);
        scanf("%f", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Value of %d float element= %.2f", i+1, ptr[i]);
        printf("\n");
    }
    
    getch();
}