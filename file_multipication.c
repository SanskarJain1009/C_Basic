#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{   
    int x;
    printf("Enter the number whose table you want-\n");
    scanf("%d",&x);
    int *y=&x;
    printf("%d", &x);
    FILE *ptr;
    ptr=fopen("Multipication.txt","w");
    int a[10];
    int i=0;
    while(i<10)
    {
        a[i]= x*(i+1);
        fprintf(ptr, "%d * %d = %d\n",x, i+1, a[i]);
        i++;
    }
    fclose(ptr);
    
    getch();
}