#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
void main()
{   
    for(int i=1;i<=1000;i++)
    {
        int d=i/100;
        int e=(i-(100*d))/10;
        int f=(i-(100*d)-(10*e));
        int p=d*d*d+e*e*e+f*f*f;
        if(i==p)
        {printf("%d\n", i);}
    }

    getch();
}