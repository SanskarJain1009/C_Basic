#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
void main()
{
    int a,b,c=1;
    srand(time(0));
    a=rand()%100+1;

    do{
        system("cls");
        printf("Enter the number-\n");
        scanf("%d",&b);

        if(b<a)
        {printf("Enter higher number!\n");}
        
        else if(b>a)
        {printf("Enter lower number!\n");}
        
        else{printf("You guessed it in %d attempts\n", c);}
        c++;
        if(b!=a)
        {printf("Enter any key to proceed!\n");}
        getch();
    }
    while(b!=a);
    
    getch();
}